# Praktikum Algoritma & Pemrograman 3A

[![cek](https://github.com/keleeeep/ap3a-praktikum/actions/workflows/cek.yml/badge.svg)](https://github.com/keleeeep/ap3a-praktikum/actions/workflows/cek.yml)

Latihan praktikum Algoritma & Pemrograman 3A dalam bahasa C, dengan test otomatis untuk mengecek jawaban sendiri. Practice exercises in C for an undergraduate algorithms lab, with automatic tests.

## Jenis latihan

Setiap pertemuan punya folder sendiri dengan tiga jenis latihan:

| Folder | Yang dikerjakan |
|---|---|
| `kembangkan/` | Program sudah benar. Kembangkan ke versi yang lebih besar, misalnya array 1 dimensi menjadi 2 dan 3 dimensi. |
| `lengkapi/` | Beberapa baris dihapus dan diganti `TODO`. Isi bagian yang kosong. |
| `perbaiki/` | Program berjalan tetapi hasilnya salah. Temukan dan perbaiki bug-nya. |

Penjelasan tiap latihan ada di `README.md` di folder pertemuan.

## Pertemuan

| Pertemuan | Topik |
|---|---|
| [P5](p05-array/) | Array 1, 2 dan 3 dimensi |
| [P6](p06-pointer-file/) | Pointer dan operasi file |

## Cara memakai

Butuh compiler C (`gcc` atau `clang`) dan shell. Di Windows, pakai WSL atau Git Bash.

```sh
git clone https://github.com/keleeeep/ap3a-praktikum.git
cd ap3a-praktikum
./cek.sh p05-array      # cek satu pertemuan
./cek.sh                # cek semua pertemuan
```

Untuk menjalankan satu program secara manual:

```sh
cc -std=c99 -Wall p05-array/kembangkan/nilai1d.c -o nilai1d
./nilai1d
```

## Cara kerja test

Setiap test adalah sepasang file di `tests/`: `<program>.<n>.in` berisi input, dan `<program>.<n>.expect` berisi baris yang harus muncul di output. `cek.sh` mengompilasi program, menjalankannya dengan input itu di folder kosong, lalu memeriksa setiap baris. Teks prompt seperti `Bilangan ke-1:` boleh berbeda; yang dicek hanya baris hasil.

Kunci jawaban tidak ada di repo ini.
