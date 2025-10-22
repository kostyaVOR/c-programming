#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a[10];
    int k;
    for (int i = 0; i <= 9; ++i) {
        scanf("%lf", &a[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i <= 9; ++i) {
        printf("%lf ", a[(i-k + 10) % 10]);
    }
}
