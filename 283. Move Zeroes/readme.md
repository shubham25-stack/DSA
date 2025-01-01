Problem Statement:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
</br>
Note that you must do this in-place without making a copy of the array.
</br>
Approach</br>
Two-Pointer Technique:</br>
Use a pointer nonZero to keep track of the position where the next non-zero element should be placed.</br>
Traverse the array with a loop (i is the current index):</br>
If the current element is non-zero, place it at the nonZero index and increment nonZero.</br>
This effectively shifts all non-zero elements to the front in their relative order.</br>
Fill Zeros:</br>
After processing all elements, the nonZero index marks the boundary where zeros start.</br>
Use another loop to set all elements from nonZero to the end of the array to 0.</br>
Complexity Analysis</br>
Time Complexity:</br>
First Loop:</br>

The first loop iterates over all elements of the array, processing each element exactly once.</br>
Time complexity: O(n).</br>
Second Loop:</br>

The second loop fills zeros from the nonZero index to the end of the array.</br>
In the worst case, this loop also iterates over all elements (if all elements are non-zero).</br>
Time complexity: O(n).</br>
Overall Time Complexity:</br>

O(n): The two loops combined still process each element at most twice.</br></br>
Space Complexity:</br>
O(1): The function operates directly on the input array without using any extra space, aside from the nonZero pointer.</br></br>
</br>

![alt text](<Screenshot 2025-01-01 150750.png>)