#include <stdio.h>
#include <math.h>

int main() {
    double a[10];
    double sum = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%lf", &a[i]);
        sum += round(a[i] * 100.0);
    }
    double sr_arif = sum / 1000.0;
    printf("%.2f\n", sr_arif);
    return 0;
}
