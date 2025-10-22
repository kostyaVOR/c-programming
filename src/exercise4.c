#include <stdio.h>

int main() {
    double a[10];
    double x;
    int per;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    scanf("%lf", &x);
    scanf("%d", &per);
    for (int i = 9; i > per; i--) {
        a[i] = a[i - 1];
    }
    a[per] = x;

    for (int i = 0; i < 10; i++) {
        printf("%lf\n", a[i]);
    }
}
