# Pertemuan 5: Array

Array 1 dimensi, 2 dimensi dan 3 dimensi di C. Ada tiga jenis latihan. Cek hasilmu dengan `./cek.sh p05-array` dari folder utama repo.

## 1. Kembangkan: dari 1 dimensi ke 3 dimensi

`kembangkan/nilai1d.c` menyimpan nilai 4 tugas milik 1 mahasiswa di array 1 dimensi, lalu menampilkan rata-ratanya. Program ini sudah benar. Jalankan dan pahami dulu.

**Langkah 1.** Salin `nilai1d.c` menjadi `kembangkan/nilai2d.c`. Ubah supaya menyimpan nilai **3 mahasiswa × 4 tugas** di array `nilai[3][4]`. Input dibaca per mahasiswa: 4 nilai mahasiswa 1, lalu 4 nilai mahasiswa 2, lalu mahasiswa 3. Output harus berisi baris persis seperti ini:

```
Mahasiswa 1: rata-rata = 75.00
Mahasiswa 2: rata-rata = 85.00
Mahasiswa 3: rata-rata = 65.00
Rata-rata kelas = 75.00
```

**Langkah 2.** Salin `nilai2d.c` menjadi `kembangkan/nilai3d.c`. Tambahkan dimensi kelas: **2 kelas × 3 mahasiswa × 4 tugas** di array `nilai[2][3][4]`. Input dibaca kelas 1 dulu (3 mahasiswa), lalu kelas 2. Format output:

```
Kelas 1, mahasiswa 1: rata-rata = 75.00
...
Rata-rata kelas 1 = 75.00
Kelas 2, mahasiswa 1: rata-rata = 90.00
...
Rata-rata kelas 2 = 73.33
```

Petunjuk: setiap dimensi baru berarti satu loop `for` baru. Rata-rata kelas adalah total semua nilai di kelas itu dibagi jumlah nilainya.

## 2. Lengkapi: nilai terbesar dan terkecil

`lengkapi/minmax.c` membaca 10 bilangan, lalu menampilkan yang terbesar dan terkecil. Beberapa baris sudah dihapus dan diganti `TODO`. Isi setiap `TODO` tanpa mengubah baris lain.

Hati-hati dengan nilai awal `maks` dan `min`. Test kedua memakai 10 bilangan negatif.

## 3. Perbaiki: penjumlahan matriks

`perbaiki/tambah.c` menjumlahkan dua matriks 3×3. Program bisa dikompilasi dan dijalankan, tetapi hasilnya salah. Ada **2 bug**. Temukan dan perbaiki keduanya.

Contoh: A berisi 1 sampai 9 dan B berisi 10, 20, ..., 90. Hasil yang benar:

```
  11  22  33
  44  55  66
  77  88  99
```

Cara mencari bug: jalankan programnya, bandingkan output dengan hasil yang benar, lalu lihat baris mana yang menghasilkan angka yang salah.

## Cek hasil

```sh
./cek.sh p05-array
```

`LULUS` berarti output benar. `GAGAL` menampilkan baris yang seharusnya ada di output. `BELUM` berarti file-nya belum dibuat.
