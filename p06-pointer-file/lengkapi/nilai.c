/* Lengkapi: simpan nama dan nilai 3 mahasiswa ke file nilai.txt,
   lalu baca lagi file itu dan tampilkan isinya beserta rata-rata.
   Isi setiap bagian bertanda TODO. Jangan ubah baris lain. */
#include <stdio.h>
#define MHS 3

int main(void)
{
    FILE *pf = NULL;
    char nama[30];
    int nilai, i, n = 0, total = 0;

    /* TODO 1: buka nilai.txt untuk DITULIS, simpan pointer-nya di pf */

    if (pf == NULL) {
        printf("File tidak bisa dibuat\n");
        return 1;
    }
    for (i = 0; i < MHS; i++) {
        printf("Nama dan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%29s %d", nama, &nilai);
        /* TODO 2: tulis nama dan nilai ke file, satu mahasiswa per baris */
    }
    fclose(pf);

    /* TODO 3: buka nilai.txt untuk DIBACA */

    if (pf == NULL) {
        printf("File tidak bisa dibuka\n");
        return 1;
    }
    printf("\nIsi nilai.txt:\n");
    /* TODO 4: baca file sampai habis dengan fscanf. Untuk setiap baris:
       tampilkan "<nama> <nilai>", tambahkan nilai ke total, dan tambah n */

    /* TODO 5: tutup file */

    printf("Rata-rata = %.2f\n", (float)total / n);
    return 0;
}
