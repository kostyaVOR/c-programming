#include "../include/array_function.h"
#include <stdio.h>

void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
        for (int i = 0; i < size_src1; ++i) {
            dest[i] = src1[i];
        }

        for (int i = 0; i < size_src2; ++i) {
            dest[i + size_src1] = src2[i];
        }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (int i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }

    for (int i = 0; i < size_src2; ++i) {
        dest[i + size_src1] = src2[i];
    }

    size_t totalsize = size_src1 + size_src2;
    for (int i = 0; i < totalsize; ++i) {
        int min_i = i;
        for (int j = i; j < totalsize; ++j) {
            if (dest[j] < dest[min_i]) {
                min_i = j;
            }
        }
        if (min_i != i) {
            int temp = dest[i];
            dest[i] = dest[min_i];
            dest[min_i] = temp;
        }
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
        int min1 = src[0];
        int max1 = src[0];
        for (int i = 0; i < size; ++i) {
            if (src[i] <= min1) {
                min1 = src[i];
            }
            if (src[i] >= max1) {
                max1 = src[i];
            }
        }
        *max = max1;
        *min = min1;
}


