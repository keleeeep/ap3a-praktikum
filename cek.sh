#!/bin/sh
# Cek jawaban dengan test di folder tests/ setiap pertemuan.
#
#   ./cek.sh                 cek semua pertemuan
#   ./cek.sh p05-array       cek satu pertemuan
#   ./cek.sh --kompilasi     hanya cek bahwa semua kode bisa dikompilasi (dipakai CI)
#
# Untuk setiap test tests/<program>.<n>.in, skrip mencari <program>.c di folder
# pertemuan, mengompilasinya, menjalankannya dengan input itu, lalu memeriksa bahwa
# setiap baris di tests/<program>.<n>.expect muncul di output.
# KODE=<folder> memakai folder lain sebagai sumber kode (misalnya folder kunci jawaban).

CC=${CC:-cc}
CFLAGS="-std=c99 -Wall -O0"
TMP=$(mktemp -d)
trap 'rm -rf "$TMP"' EXIT

if [ "$1" = "--kompilasi" ]; then
  gagal=0
  for f in p*/*/*.c; do
    if $CC $CFLAGS -c "$f" -o "$TMP/x.o" 2>"$TMP/err"; then
      echo "OK      $f"
    else
      echo "ERROR   $f"; cat "$TMP/err"; gagal=1
    fi
  done
  exit $gagal
fi

if [ -n "$1" ]; then pertemuan=$1; else pertemuan=$(ls -d p*/ | tr -d /); fi

lulus=0; gagal=0; belum=0
for p in $pertemuan; do
  [ -d "$p/tests" ] || { echo "Folder $p/tests tidak ada"; exit 2; }
  sumber=${KODE:-$p}
  echo "== $p"
  for input in "$p"/tests/*.in; do
    nama=$(basename "$input" .in)       # contoh: minmax.2
    prog=${nama%.*}                     # contoh: minmax
    src=$(find "$sumber" -name "$prog.c" -not -path "*/tests/*" | head -n 1)
    if [ -z "$src" ]; then
      echo "BELUM   $nama: $prog.c belum dibuat"; belum=$((belum + 1)); continue
    fi
    if ! $CC $CFLAGS "$src" -o "$TMP/$prog" 2>"$TMP/err"; then
      echo "GAGAL   $nama: $src tidak bisa dikompilasi"; sed 's/^/        /' "$TMP/err" | head -n 5
      gagal=$((gagal + 1)); continue
    fi
    # batas 5 detik, supaya loop tak berujung tidak membuat skrip macet
    perl -e 'alarm 5; exec @ARGV' "$TMP/$prog" <"$input" >"$TMP/out" 2>&1
    hilang=""
    while IFS= read -r baris; do
      grep -qF -- "$baris" "$TMP/out" || hilang="$hilang
          $baris"
    done <"$p/tests/$nama.expect"
    if [ -z "$hilang" ]; then
      echo "LULUS   $nama"; lulus=$((lulus + 1))
    else
      echo "GAGAL   $nama: baris ini tidak ada di output:$hilang"; gagal=$((gagal + 1))
    fi
  done
done

echo
echo "Lulus $lulus, gagal $gagal, belum dibuat $belum"
[ $gagal -eq 0 ] && [ $belum -eq 0 ]
