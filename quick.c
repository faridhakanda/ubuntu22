// Quick sort Algorithms

#include <stdio.h>

int partion(int A[], int low, int high) {
    int i, j, t, pivot;
    pivot = A[high];
    for (i = low-1, j = low; j < high; j++) {
        if (j >= 0 && A[j] < pivot) {
            i += 1;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    t = A[high];
    A[high] = A[i+1];
    A[i+1] = t;
    return i+1;
}

void quick_sort(int A[], int low, int high) {
    if (low >= high) {
        return;
    }
    int p = partion(A, low, high);
    quick_sort(A, low, p-1);
    quick_sort(A, p+1, high);
}

int main() {
    int A[] = {10, 39, 1, 2, 13, 65, 19, 3, 56, 61, 100, 38, 32};
    int i, n = 12;
    quick_sort(A, 0, n);
    for (i = 0; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}