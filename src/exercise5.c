#include <stdio.h>

int main() {
    double a[10][3];
    double b[3][10];
    double c[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%lf", &b[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            c[i][j] = 0.0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j > 0) printf(" ");
            printf("%.2f", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
