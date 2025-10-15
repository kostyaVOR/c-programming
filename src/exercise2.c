#include <stdio.h>

int main(int argc, char *argv[]) {
    double a[10];
    for (int i = 0; i <= 9; ++i) {
        scanf("%lf", &a[i]);
        a[i] = atoi(argv[i+1]);
    }
    for (int i = 9; i >= 0; --i) {
        printf("%d ", a[i]);
    }
}
