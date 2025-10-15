#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[10];
    int k = atoi(argv[11]);
    for (int i = 0; i <= 9; ++i) {
        a[i] = atoi(argv[i+1]);
    }
    if (k > 0) {
        for (int i = 0; i <= 9; ++i) {
            printf("%d " , a[(i - k + 10) % 10]);
        }
    }
    else if (k < 0) {
        for (int i = 0; i <= 9; ++i) {
            printf("%d ", a[(i - k) % 10]);
        }
    }
}
