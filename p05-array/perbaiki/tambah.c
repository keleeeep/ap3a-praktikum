/* Perbaiki: penjumlahan dua matriks 3x3.
   Program ini bisa dikompilasi dan dijalankan, tetapi hasilnya salah.
   Ada 2 bug. Temukan dan perbaiki keduanya. */
#include <stdio.h>
#define N 3

int main(void)
{
    int A[N][N], B[N][N], C[N][N], b, k;

    printf("Matriks A:\n");
    for (b = 0; b < N; b++)
        for (k = 0; k < N; k++) {
            printf("A[%d][%d] = ", b, k);
            scanf("%d", &A[b][k]);
        }
    printf("Matriks B:\n");
    for (b = 0; b < N; b++)
        for (k = 0; k < N; k++) {
            printf("B[%d][%d] = ", b, k);
            scanf("%d", &B[b][k]);
        }

    for (b = 0; b < N; b++)
        for (k = 0; k < N; k++)
            C[b][k] = A[b][k] + B[k][b];

    printf("\nA + B =\n");
    for (b = 1; b < N; b++) {
        for (k = 0; k < N; k++)
            printf("%4d", C[b][k]);
        printf("\n");
    }
    return 0;
}
