PROBLEM STATEMENT:</br>
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,</br> and two integers m and n, representing the number of elements in nums1 and nums2 </br>respectively.</br></br>

Merge nums1 and nums2 into a single array sorted in non-decreasing order.</br>
</br>
The final sorted array should not be returned by the function, but instead be stored</br> inside the array nums1. To accommodate this, nums1 has a length of m + n, where the</br> first m elements denote the elements that should be merged, and the last n elements </br>are set to 0 and should be ignored. nums2 has a length of n.</br></br>

Step by Step Algorithm</br>
1. Initialize Pointers</br>
midx: Points to the last element in the meaningful part of nums1 (i.e., m - 1).</br>
nidx: Points to the last element in nums2 (i.e., n - 1).</br>
right: Points to the last index in nums1 (i.e., m + n - 1).</br>
midx = m - 1</br>
nidx = n - 1 </br>
right = m + n - 1</br>
2. Iterate While nidx is Non-Negative</br>
The loop continues until all elements from nums2 have been merged into nums1.</br>
while nidx >= 0:</br>
3. Compare Elements and Merge</br>
If midx is non-negative and the element at nums1[midx] is greater than nums2[nidx],</br> place nums1[midx] at nums1[right], then decrement midx.</br>
if midx >= 0 and nums1[midx] > nums2[nidx]:</br>
    nums1[right] = nums1[midx]</br>
    midx -= 1</br>
Otherwise, place nums2[nidx] at nums1[right], then decrement nidx.</br>
else:</br>
    nums1[right] = nums2[nidx]</br>
    nidx -= 1</br>
4. Move the right Pointer Left</br>
After each placement, decrement the right pointer to move to the next position.</br>
right -= 1</br>
5. End of Loop</br>
The loop ends when all elements from nums2 have been placed into nums1. If any </br>elements remain in nums1, they are already in the correct position, so no further </br>action is needed.</br></br>

Complexity</br>
Time complexity: O((m+n)log(m+n))</br>
Space complexity: O(sort)</br></br>

Time complexity: O(m+n)</br>
Space complexity: O(1)</br>
</br></br></br></br></br></br></br>

![alt text](image.png)