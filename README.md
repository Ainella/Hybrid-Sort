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

## Methodology 
The algorithms implemented in C++.  The algorithms were tested on arrays of sizes from 10,20, 30, . . ., 9900. Each array size was tested 10 times. The results were generated for two categories: sorted array (best case of hybrid sort) and randomly shuffled arrays of values 0, 1, ..., n − 1.

The process continues until the entire array is sorted.
![image](https://github.com/user-attachments/assets/dfc266e4-b594-48f1-9082-2c9e00c22af6)

## Graphs were generated to illustrate sorting times for different input sizes. The results highlight:

Insertion sort
- For best case: O(n).
- For worst case: O(n^2). 

Hybrid sort
- Best case:  N+Nlog(N/K)  
- Worst case: NK + Nlog(N/K) 
where K is part size

Heap sort
- Worst case time complexity of O(n(log(n)) [all elements in the list are distinct] 
- Best case time complexity of O(n) [all elements are same]

Merge sort
- Worst Case Time Complexity [ Big-O ]: O(n*log n)
- Best Case Time Complexity [Big-omega]: O(n*log n)

Quick sort
- Best Case Complexity O(n*log(n))
- Worst Case Complexity O(n^2)


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
Download the MinGW installer.
Run the installer and follow the instructions to install MinGW. Make sure to install the mingw32-gcc-g++ package for C++ support.
Add MinGW to the System Path:

Open the Start Menu, search for "Environment Variables" and select "Edit the system environment variables".
Click on the "Environment Variables" button.
In the "System variables" section, find the Path variable, select it, and click "Edit".
Add the path to the MinGW bin directory (e.g., C:\MinGW\bin) to the list and click "OK".
Install make:

You can download the make utility for Windows (e.g., from ezwinports).
Extract the downloaded files and place make.exe in the MinGW bin directory (e.g., C:\MinGW\bin).
Prepare the Project:

Place all your project files (source files, headers, Makefile, etc.) in a directory (e.g., C:\Projects\SortAlgorithm).
Open Command Prompt:

Open the Command Prompt (cmd).
Navigate to the Project Directory:

Change the directory to your project directory using the cd command. For example:
sh
cd C:\Projects\SortAlgorithm
Build the Project:

Run the make command to build the project:

## Installation
Compile the Code:
g++ -std=c++11 main.cpp -o hybrid_sort

## Usage
Run the Executable:
./hybrid_sort


