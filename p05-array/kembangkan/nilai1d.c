/* Kembangkan: nilai 4 tugas milik 1 mahasiswa, disimpan di array 1 dimensi.
   Program ini sudah benar. Tugasmu ada di README.md pertemuan ini. */
#include <stdio.h>
#define TUGAS 4

int main(void)
{
    int nilai[TUGAS], t, total = 0;

    for (t = 0; t < TUGAS; t++) {
        printf("Nilai tugas ke-%d: ", t + 1);
        scanf("%d", &nilai[t]);
        total += nilai[t];
    }
    printf("\nRata-rata = %.2f\n", (float)total / TUGAS);
    return 0;
}
