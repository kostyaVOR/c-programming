#include <stdio.h>

int main() {
    double a[10];
    double X;
    int per;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    scanf("%lf %d", &X, &per);
    for (int i = 9; i > per; i--) {
        a[i] = a[i - 1];
    }
    a[per] = X;
    for (int i = 0; i < 10; i++) {
        printf("%lf", a[i]);
    }
}
