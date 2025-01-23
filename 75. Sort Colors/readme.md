PROBLEM STATEMENT:</br>
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with</br> the colors in the order red, white, and blue.</br>
</br>
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.</br></br>

You must solve this problem without using the library's sort function.</br></br>


Approach</br>
The provided code implements the Dutch National Flag algorithm to sort an array containing three distinct values (0, 1, and 2). The </br>algorithm uses three pointers:</br></br>

left: Tracks the position for the next 0.</br>
index: Scans through the array.</br>
right: Tracks the position for the next 2.</br>
The algorithm iterates through the array and swaps elements to ensure that:</br>
</br>
All 0s are on the left,</br>
All 1s are in the middle,</br>
All 2s are on the right.</br>
Time Complexity</br>
O(n): The algorithm makes a single pass through the array, where n is the number of elements in the array.</br>
Space Complexity</br>
O(1): The algorithm uses a constant amount of space for the pointers and does not require any additional data structures.</br>
Summary</br>
Time Complexity: O(n)</br>
Space Complexity: O(1)</br></br></br></br></br></br></br></br></br>

![alt text](image.png)