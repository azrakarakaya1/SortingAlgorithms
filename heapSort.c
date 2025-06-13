// Heap     = ordered binary tree
// Max heap = parent > child

/*  Algrotihm:
    1. Create max heap
    2. Remove largest item
    3. Place item in sorted partition
*/

// left(i)   = 2*i          or  2*i + 1     in 0-based as I used
// right(i)  = 2*i + 1          2*i + 2
// parent(i) = floor(i/2)       (i - 1)/2  -> which is integer division
// root      = A[1]             A[0]

#include <stdio.h>

int heap_size;

// Helper functions for left or right child nodes
int Left(int i) { return 2 * i + 1; }
int Right(int i) { return 2 * i + 2; }

// Restores the heap property in a subtree rooted at a given index, complexity: O(logn)
void Heapify(int A[], int i) {
    
    int l = Left(i);
    int r = Right(i);
    int largest;

    if (l <= heap_size && A[l] > A[i])
        largest = l;
    else
        largest = i;
    
    if (r <= heap_size && A[r] > A[largest])
        largest = r;
    
    if (largest != i) {
        // if larger element found in any child node swap largest with parent node 
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        // recursion is used to put it in the right position in heap
        Heapify(A, largest);
    }
}

// Converts an undordered array into a max-heap, complexity: O(n)
void BuildMaxHeap(int A[], int n) {

    heap_size = n - 1;      // 0-based indexing used
    for (int i=n/2 - 1; i >= 0; i--)
        Heapify(A, i);
}

// Complexity: n + n * logn -> O(nlogn)
void HeapSort(int A[], int n) {

    BuildMaxHeap(A, n);
    for (int i = n - 1; i >= 1; i--) {
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;

        heap_size--;
        Heapify(A, 0);
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

    HeapSort(A, n);

    printf("Sorted array:\n");
    PrintArray(A, n);

    return 0;
}