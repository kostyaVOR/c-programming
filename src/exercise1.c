#include <stdio.h>

int main(int argc, char** argv) {
    double a[10]={};
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }

    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    printf("%f\n", sum/10);
    return 0;
}
