PROBLEM STATEMENT:</br>
Approach</br>
The problem is to find all unique triplets in the array that sum to zero. The approach used in the code is as follows:</br></br>

Sorting:</br></br>

The input array nums is sorted to simplify duplicate handling and enable the two-pointer approach.</br>
Iterating through the array:</br>
</br>
A loop runs over each element, treating it as the first element of the potential triplet.</br>
Two-pointer technique:</br>
</br>
For each fixed element (first element of the triplet), two pointers (j and k) are used to find two other elements such that their sum </br>equals the negative of the fixed element.</br>
If the sum is less than the target (0), the left pointer (j) is moved right. If the sum is greater, the right pointer (k) is moved left.</br> If the sum matches, the triplet is added to the set.</br>
Removing duplicates:</br></br>

A set is used to ensure that all the triplets are unique since duplicate triplets are not allowed.</br>
Returning the result:</br></br>

The unique triplets from the set are transferred to a vector for the final result.</br></br></br>


Time Complexity  </br>
Sorting:  </br>
Sorting the array takes O(nlogn), where n is the size of the array.  </br>
</br>
Outer loop:  </br>
The loop iterates through each element of the array, so it runs O(n) times.  </br></br>

Inner two-pointer loop:  </br>
For each iteration of the outer loop, the two-pointer loop may iterate up to O(n) in the worst case (when j and k span the whole </br>array).  
</br>
Therefore, the inner loop contributes O(n) for each iteration of the outer loop.  </br></br>

Combining these, the overall time complexity is:  </br>
O(nlogn) + O(n^2) = O(n^2)</br></br>

Space Complexity:  </br>
Set for unique triplets:  </br>
The set may store up to O(n^2) triplets in the worst case, but this depends on the number of unique triplets present. In the average </br>case, this space is much smaller.  </br>
</br>
Output vector:  </br>
The output vector also stores up to O(n^2) triplets.  </br>
</br>
Auxiliary space:  </br>
Sorting takes O(logn) auxiliary space for the sorting algorithm (if we assume an in-place sorting algorithm like QuickSort).  </br>
</br>
Additional space for variables and pointers is O(1).  </br></br>

Thus, the overall space complexity is dominated by the set and output vector:  </br>
O(n^2) </br></br></br></br></br>


</br>

![alt text](image.png)