#include <stdio.h>
#include <string.h>

int main(void) {
    /* Zwei zweidimensionale Arrays direkt bei der Deklaration initialisieren */
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{7, 8, 9}, {10, 11, 12}};

    /* Hilfsarray zum Vertauschen */
    int temp[2][3];

    printf("Vor dem Vertauschen:\n");
    printf("Array A:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Array B:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    /* Vertauschen der Inhalte (Elementweise mit memcpy in diesem Beispiel) */
    memcpy(temp, A, sizeof temp);
    memcpy(A, B, sizeof A);
    memcpy(B, temp, sizeof B);

    printf("\nNach dem Vertauschen:\n");
    printf("Array A:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Array B:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
