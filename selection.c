// This is the Selection sort algorithms

#include <stdio.h>

void selection_sort(int A[], int n) {
    int i, j, t, index;
    for (i = 0; i < n; i++) {
        index = i;
        for (j = i+1; j < n; j++) {
            if (A[j] < A[index]) {
                index = j;
            }
        }
        if (index != i) {
            t = A[i];
            A[i] = A[index];
            A[index] = t;
        }
    }
}

int main() {
    int A[] = {2, 821, 10, 35, 191, 1, 3, 4, 58, 19};
    int i, n = 10;
    selection_sort(A, n);
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}