PROBLEM STATEMENT:</br>
Write a function to find the longest common prefix string amongst an array of strings.</br></br>

If there is no common prefix, return an empty string "".</br></br>

Approach:</br>
The function longestCommonPrefix determines the longest common prefix (LCP) for a vector of strings using the following steps:</br>
</br>
Edge Case: If the input vector strs is empty, return an empty string.</br>
Initialization: Assume the first string (strs[0]) is the initial prefix.</br>
Iterative Check:</br>
Iterate through the rest of the strings in the vector.</br>
Compare the prefix with each string, reducing its length character by character until it matches the beginning of the current string.</br>
If the prefix length becomes zero, return an empty string.</br>
Return Result: At the end of the iteration, the prefix contains the longest common prefix.</br></br></br>


Time Complexity:</br>
The algorithm iterates over all strings and compares characters in a way that, in total, does not exceed the number of characters across </br>all strings.</br>
Thus, the time complexity is O(m), where m is the total number of characters in all strings.</br>
Time Complexity: O(m).</br>
</br>
</br>
Space Complexity:</br>
The algorithm uses constant extra space as no auxiliary data structures are used.</br>
Thus, the space complexity is O(1).</br>
Space Complexity: O(1).</br></br></br></br></br></br>



![alt text](image.png)