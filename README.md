# Hybrid-Sort

This project compares four sorting algorithms: Heap Sort, Merge Sort, Quick Sort, and Insertion Sort. The goal is to analyze their performance and determine the most efficient sorting method based on different scenarios.
1. Heap Sort:
Heap sort uses heap structure. Each element  has  no more than two children. First child is located at position 2-k+1, and the second child is located at position 2-k+2, where k is parent position. The child must be smaller than  the parent.In my code, I have 3 functions. Heap puts elements to proper place in heap structure. Fix restores structure after removing n elements. Heap sort takes the elements, moves them to the end of array, and call fix to restore heap structure.
2. Merge Sort:
Merge sort has algorithm the array is initially divided into 2 equal halves and then they are combined in order. Function merge contains arrays right and left, output. It needs to copy elements from left and right arrays into the output array. Moreover, each time copy left[l] to output[i], when index l is equal to left size, the same thing with right[r].  At the end increment i, and l or r. 
3. Quick Sort:
Initially selects an element as a pivot element and partitions the given array around the picked pivot.
4. Insertion Sort:
Insertion sort picks largest element in an sorted part and placed at the last position in the unsorted part. Then do same a few times with the smaller unsorted part of array.

The process continues until the entire array is sorted.
![image](https://github.com/user-attachments/assets/dfc266e4-b594-48f1-9082-2c9e00c22af6)

## Graphs were generated to illustrate sorting times for different input sizes. The results highlight:

- Insertion Sort is efficient for small datasets but performs poorly on large datasets.

- Heap Sort and Merge Sort usually maintain O(n log n) complexity.

- Quick Sort is fast in general but can degrade to O(n²) in the worst case.

- Hybrid Sort efficiently combines Merge Sort and Insertion Sort for optimal performance.

## Features

-  Utilizes a hybrid approach to enhance sorting efficiency.
-  Designed to handle various data sizes and distributions effectively.
-  Each sorting algorithm is implemented in a separate module for clarity and reusability.

## Tools & Technologies Used

- Programming Language: C++

- Compiler: GNU GCC 

- Version Control: Git & GitHub

- Data Analysis & Visualization: Excel for plotting performance graphs

## Prerequisites

- A C++ compiler that supports C++11 or later.

## Installation
Compile the Code:
g++ -std=c++11 main.cpp -o hybrid_sort

## Usage
Run the Executable:
./hybrid_sort


