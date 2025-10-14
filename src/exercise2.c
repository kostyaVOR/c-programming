#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a[10];
    for (int i = 0; i <= 9; ++i) {
        a[i] = atoi(argv[i+1]);
    }
    for (int i = 9; i >= 0; --i) {
        printf("%d ", a[i]);
    }
}
