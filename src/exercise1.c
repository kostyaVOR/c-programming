#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[10];
    for (int i = 0; i <= 9; ++i) {
        a[i] = atoi(argv[i+1]);
    }
    float sr_arif = 0;
    
    for (int i = 0; i<=9; ++i) {
        sr_arif += a[i];
    }
    printf("%.2f\n", sr_arif/10);
}
