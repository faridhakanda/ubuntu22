#include <stdio.h>

void insertion_sort(int A[], int n) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        t = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > t) {
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = t;
    }
}

int main() {
    int A[] = {1, 3, 5, 10, 35, 91, 2, 5, 82, 15};
    int i, n = 10;
    insertion_sort(A, n);
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}