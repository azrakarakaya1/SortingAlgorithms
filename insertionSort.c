// Insertion sort   = builds the final sorted array one element at a time by repeatedly inserting 
//                    each item into its correct position among the previously sorted elements.

#include <stdio.h>

// Best case: O(n) array is already sorted
// Worst case: O(n^2) reverse ordered array     -> Average case: O(n^2) random order data
void InsertionSort(int A[], int n) {

    // runs (n - 1) time
    for (int i=1; i < n; i++) {
        int key = A[i];
        int j = i - 1;

        // shift larger elements to the right
        // gives worst case when shifts al i elements: O(i)
        while (j >= 0 && A[i] < A[j]) {
            A[j + 1] = A[j];
            j--;
        }
        // insert the key into correct position
        A[j + 1] = key;
    }
}

void PrintArray(int A[], int n) {

    for (int i=0; i < n; i++)
        printf("%d\t", A[i]);    
    printf("\n");
}

int main() {

    int A[] = {5, 16, 4, 10, 14, 7, 9, 3, 2, 8};
    int n = sizeof(A)/sizeof(A[0]);

    printf("Original array:\n");
    PrintArray(A, n);

    InsertionSort(A, n);

    printf("Sorted array:\n");
    PrintArray(A, n);

    return 0;
}