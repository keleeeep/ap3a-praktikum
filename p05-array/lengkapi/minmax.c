/* Lengkapi: cari nilai terbesar dan terkecil dari 10 bilangan.
   Isi setiap bagian bertanda TODO. Jangan ubah baris lain. */
#include <stdio.h>
#define N 10

int main(void)
{
    int a[N], i, maks, min;

    for (i = 0; i < N; i++) {
        printf("Bilangan ke-%d: ", i + 1);
        /* TODO 1: baca bilangan ke dalam a[i] */
    }

    /* TODO 2: beri nilai awal untuk maks dan min */

    for (i = 1; i < N; i++) {
        /* TODO 3: perbarui maks dan min jika a[i] lebih besar atau lebih kecil */
    }

    printf("\nTerbesar = %d\nTerkecil = %d\n", maks, min);
    return 0;
}
