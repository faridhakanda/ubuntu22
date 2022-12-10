#include <stdio.h>

void bubble_sort(int A[], int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (A[j] > A[j+1]) {
                t = A[j+1];
                A[j+1] = A[j];
                A[j] = t;
            }
        }
    }
}

int main() {
    int A[] = {2, 5, 1, 3, 53, 10, 9, 8, 97, 87, 7, 15, 38};
    int i, n = 13;
    bubble_sort(A, n);
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}