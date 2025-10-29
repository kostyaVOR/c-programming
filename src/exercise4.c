#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
    double a[10];
    double x;
    int per;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    x = atof(argv[1]);
    per = atoi(argv[2]);
    for (int i = 9; i > per; i--) {
        a[i] = a[i - 1];
    }
    a[per] = x;

    for (int i = 0; i < 10; i++) {
        printf("%lf\n", a[i]);
    }
}
