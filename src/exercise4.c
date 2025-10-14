#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[10];
    int x = atoi(argv[11]);
    int k = atoi(argv[12]);
    for (int i = 0; i <= 9; ++i) {
        a[i] = atoi(argv[i+1]);
    }

    for (int i = 9; i > k; --i) {
        a[i] = a[i-1];
    }
    a[k] = x;
    for (int i = 0; i <= 9; ++i) {
        printf("%d ", a[i]);
    }
}
