/* Perbaiki: baca 5 bilangan, lalu balik urutannya di tempat dengan fungsi tukar.
   Program ini bisa dikompilasi dan dijalankan, tetapi hasilnya salah.
   Ada 2 bug. Temukan dan perbaiki keduanya. */
#include <stdio.h>
#define N 5

void tukar(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = *x;
}

int main(void)
{
    int a[N], i;

    for (i = 0; i < N; i++) {
        printf("Bilangan ke-%d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++)
        tukar(&a[i], &a[N - 1 - i]);

    printf("\nTerbalik:");
    for (i = 0; i < N; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
