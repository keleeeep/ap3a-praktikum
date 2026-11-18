/* Kembangkan: baca 5 bilangan ke array, lalu jumlahkan lewat pointer.
   Program ini sudah benar. Tugasmu ada di README.md pertemuan ini. */
#include <stdio.h>
#define N 5

int main(void)
{
    int a[N], i, total = 0;
    int *p = a;                     /* p menunjuk a[0] */

    for (i = 0; i < N; i++) {
        printf("Bilangan ke-%d: ", i + 1);
        scanf("%d", p + i);         /* p + i sama dengan &a[i] */
    }

    for (i = 0; i < N; i++)
        total += *(p + i);          /* *(p + i) sama dengan a[i] */

    printf("\nJumlah = %d\n", total);
    return 0;
}
