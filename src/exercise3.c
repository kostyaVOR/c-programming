#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a[10];
    int k = scanf("%d", &k);
    for (int i = 0; i <= 9; ++i) {
        scanf("%lf", &a[i+1]);
    }
    if (k > 0) {
        for (int i = 0; i <= 9; ++i) {
            printf("%f " , a[(i - k + 10) % 10]);
        }
    }
    else if (k < 0) {
        for (int i = 0; i <= 9; ++i) {
            printf("%f ", a[(i - k) % 10]);
        }
    }
}
