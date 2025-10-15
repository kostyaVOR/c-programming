#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double A[10][3];
    double B[3][10];
    double C[10][10] = {0};

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 3; ++j) {
            A[i][j] = atof(argv[i * 3 + j + 1]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 10; ++j) {
            B[i][j] = atof(argv[30 + i * 10 + j + 1]]);
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 3; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%g ", C[i][j]);
        }
    }
    printf("\n");
}
