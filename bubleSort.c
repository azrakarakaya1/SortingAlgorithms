// Bubble sort  = repeatedly compares and swaps adjacent elements in a list to "bubble" 
//                the largest values to the end, until the list is sorted.

#include <stdio.h>

void Swap(int *v1, int *v2);

// Best case: O(n^2) array is already sorted
// Worst case: O(n^2) reverse ordered array     -> Average case: O(n^2)
void BubleSort(int A[], int n) {

    // runs n-1 times
    for (int i=0; i < n-1; i++) {

        // pushes largest element to the end
        for (int j=0; j < n-i-1; j++) {

            if (A[j] >= A[j+1])
                Swap(&A[j], &A[j+1]);
        }
    }
}

// Swap 2 elements, time complexity: O(1) constant time
void Swap(int *v1, int *v2) {
    
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
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

    BubleSort(A, n);

    printf("Sorted array:\n");
    PrintArray(A, n);

    return 0;
}