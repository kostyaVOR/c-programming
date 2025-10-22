#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a[10];
    double x;
    int per;
    for (int i = 0; i <= 9; ++i) {
        scanf("%lf", &a[i]);
    }
    scanf("%lf %d", &x, &per);
    a[per] = x;
    for (int i = 9; i > per; --i) {
        a[i] = a[i-1];
    }
    for (int i = 0; i <= 9; ++i) {
        printf("%lf ", a[i]);
    }
}
