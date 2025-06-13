# Analysis of Sorting Algorithms in C

This repository contains C implementations and algorithmic analysis of three fundamental sorting algorithms: **Bubble Sort**, **Heap Sort**, and **Insertion Sort**. Each algorithm is useful in different scenarios and demonstrates key principles of algorithm design and performance.

---

## Bubble Sort

**Description:**  
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. Each pass "bubbles" the largest unsorted value to the end.

**Complexity:**

| Case         | Time Complexity |
|--------------|-----------------|
| Best         | O(n²) (without optimization) |
| Average      | O(n²)           |
| Worst        | O(n²)           |

- **Space Complexity:** O(1) – In-place  
- **Stable:** Yes  
- **Use Case:** Simple to implement but inefficient for large datasets.

---

## Heap Sort

**Description:**  
Heap Sort uses a **binary heap** (max heap) to sort elements. It first builds a max heap and then repeatedly extracts the largest element and moves it to the sorted part of the array.

**Complexity:**

| Case         | Time Complexity |
|--------------|-----------------|
| Best         | O(n log n)      |
| Average      | O(n log n)      |
| Worst        | O(n log n)      |

- **Space Complexity:** O(1) – In-place  
- **Stable:** No  
- **Use Case:** Fast and consistent for large arrays.

---

## Insertion Sort

**Description:**  
Insertion Sort builds the sorted array one element at a time by inserting each new item into its correct position among the previously sorted elements.

**Complexity:**

| Case         | Time Complexity |
|--------------|-----------------|
| Best         | O(n)            |
| Average      | O(n²)           |
| Worst        | O(n²)           |

- **Space Complexity:** O(1) – In-place  
- **Stable:** Yes  
- **Use Case:** Very efficient for small or nearly sorted arrays.

---

## File Overview

| File Name           | Description                          |
|---------------------|--------------------------------------|
| `bubble_sort.c`     | Bubble Sort implementation           |
| `heap_sort.c`       | Heap Sort using Heapify & BuildHeap  |
| `insertion_sort.c`  | Classic Insertion Sort implementation|

---

## Summary

| Algorithm     | Time (Best) | Time (Average) | Time (Worst) | Space | Stable |
|---------------|-------------|----------------|---------------|--------|--------|
| Bubble Sort   | O(n²)       | O(n²)          | O(n²)         | O(1)   | Yes |
| Heap Sort     | O(n log n)  | O(n log n)     | O(n log n)    | O(1)   | No  |
| Insertion Sort| O(n)        | O(n²)          | O(n²)         | O(1)   | Yes |

---

Feel free to run and compare these algorithms with different inputs!



