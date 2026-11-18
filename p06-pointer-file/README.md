# Pertemuan 6: Pointer dan Operasi File

Pointer ke variabel dan array, aritmatika pointer, membuka, menulis, membaca dan menutup file. Ada tiga jenis latihan. Cek hasilmu dengan `./cek.sh p06-pointer-file` dari folder utama repo.

## 1. Kembangkan: dari pointer ke file

`kembangkan/jumlah.c` membaca 5 bilangan ke array, lalu menjumlahkannya lewat pointer `p`. Program ini sudah benar. Perhatikan bahwa `p + i` sama dengan `&a[i]`, dan `*(p + i)` sama dengan `a[i]`.

**Langkah 1.** Salin `jumlah.c` menjadi `kembangkan/mundur.c`. Ubah supaya menampilkan bilangan dari yang terakhir ke yang pertama. Pakai pointer yang mulai dari elemen terakhir lalu dikurangi (`p--`), bukan indeks `a[i]`. Untuk input `4 8 15 16 23`, output harus berisi baris:

```
Mundur: 23 16 15 8 4
```

**Langkah 2.** Salin `jumlah.c` menjadi `kembangkan/simpan.c`. Setelah membaca 5 bilangan, tulis kelimanya ke file `angka.txt` dengan `fprintf`, tutup file, buka lagi untuk dibaca, lalu jumlahkan isi file dengan `fscanf`. Output:

```
Jumlah dari file = 66
```

Petunjuk: `fopen("angka.txt", "w")` untuk menulis, `fopen("angka.txt", "r")` untuk membaca. Selalu cek apakah hasil `fopen` sama dengan `NULL`.

## 2. Lengkapi: simpan nilai ke file

`lengkapi/nilai.c` menyimpan nama dan nilai 3 mahasiswa ke file `nilai.txt`, lalu membaca file itu lagi dan menampilkan isinya beserta rata-rata. Beberapa baris sudah dihapus dan diganti `TODO`. Isi setiap `TODO` tanpa mengubah baris lain.

Untuk input `Budi 80`, `Sari 95`, `Andi 70`, output harus berisi:

```
Budi 80
Sari 95
Andi 70
Rata-rata = 81.67
```

Petunjuk: `fscanf` mengembalikan jumlah data yang berhasil dibaca. Baca terus selama hasilnya 2 (nama dan nilai).

## 3. Perbaiki: membalik array dengan fungsi tukar

`perbaiki/balik.c` membaca 5 bilangan, lalu membalik urutannya memakai fungsi `tukar(int *x, int *y)`. Program bisa dikompilasi dan dijalankan, tetapi hasilnya salah. Ada **2 bug**. Temukan dan perbaiki keduanya.

Untuk input `1 2 3 4 5`, hasil yang benar:

```
Terbalik: 5 4 3 2 1
```

Cara mencari bug: uji `tukar` sendiri dengan dua angka, lalu tulis isi array setelah setiap putaran loop di kertas.

## Cek hasil

```sh
./cek.sh p06-pointer-file
```

Setiap test berjalan di folder kosong sendiri, jadi file yang dibuat programmu tidak mengotori repo.
