# Hybrid-Sort

This project compares four sorting algorithms: Heap Sort, Merge Sort, Quick Sort, and Insertion Sort. The goal is to analyze their performance and determine the most efficient sorting method based on different scenarios.

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


