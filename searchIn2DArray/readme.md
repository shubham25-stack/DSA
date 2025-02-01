Problem Statement:</br>
You are given an m x n integer matrix matrix with the following two properties:</br></br>

Each row is sorted in non-decreasing order.</br>
The first integer of each row is greater than the last integer of the previous row.</br>
Given an integer target, return true if target is in matrix or false otherwise.</br></br>

You must write a solution in O(log(m * n)) time complexity.</br></br>

Approach</br>
The provided code implements a binary search algorithm to determine if a target value exists in a 2D matrix. Here’s a breakdown of the </br>approach:</br></br>

Matrix Properties: The matrix is assumed to be sorted in ascending order both row-wise and column-wise.</br>
</br>
Flattening the Matrix: Instead of treating the matrix as a 2D structure, the algorithm calculates indices as if the matrix were a 1D </br>array:</br></br>

The total number of elements is calculated as n = row * col.</br>
The middle index mid is computed and used to derive the corresponding row and column indices:</br>
rowIndex = mid / col</br>
colIndex = mid % col</br>
Binary Search:</br></br>

The search space is defined by start and end pointers.</br>
The algorithm iteratively checks the middle element:</br>
If it matches the target, it returns true.</br>
If the target is greater, it moves the start pointer to mid + 1.</br>
If the target is smaller, it moves the end pointer to mid - 1.</br>
This process continues until the start pointer exceeds the end pointer.</br>
Return Value: If the target is found, it returns true; otherwise, it returns false after exhausting the search space.</br></br>

Time Complexity: O(log(m * n)), where m is the number of rows and n is the number of columns.</br></br>

Space Complexity: O(1), as it uses a constant amount of extra space.</br></br></br></br></br></br></br></br></br></br></br>


![alt text](image.png)