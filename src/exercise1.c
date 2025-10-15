#include <stdio.h>

int main(int argc, char *argv[]) {
    float a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%f", &a[i]);
    }
    float sum = 0.0;
    
    for (int i = 0; i < 10; ++i) {
        sum += a[i];
    }
    float sr_arif = sum / 10.0;
    printf("%.2f\n", sr_arif);
}
