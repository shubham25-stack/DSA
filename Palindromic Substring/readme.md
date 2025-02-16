Problem statement:</br>
Given a string s, return the number of palindromic substrings in it.</br>
A string is a palindrome when it reads the same backward as forward.</br>
A substring is a contiguous sequence of characters within the string.</br></br>

Approach:</br>
The given code is designed to count the number of palindromic substrings in a given string s. It uses the </br>concept of expanding around a center to find palindromes. Here's a breakdown of the approach:</br>
</br>
Expansion Method:</br></br>

The helper function expand(s, i, j) checks how far the string can expand while maintaining a palindrome.</br>
Starting with a given center (i, j), it compares the characters at i and j, and if they are the same, it </br>expands outward (decreasing i and increasing j), counting how many palindromic substrings exist centered </br>at that index.</br>
This function returns the count of palindromes that can be expanded around the given center.</br>
Main Method (countSubstrings):</br></br>

The function countSubstrings iterates through every possible center in the string.</br>
For odd-length palindromes, it calls expand(s, center, center) where center is the midpoint.</br>
For even-length palindromes, it calls expand(s, center, center + 1) where the center is between two </br>characters.</br>
For each center, it accumulates the total count of palindromic substrings.</br>
Time Complexity:</br>
Outer Loop:</br></br>

The loop runs for every index in the string, so it will execute n times, where n is the length of the </br>string s.</br>
Expand Function:</br></br>

For each index center, the expand function tries to expand both for odd and even length centers.</br>
In the worst case, the expand function might check all the way out to the edges of the string (which </br>happens in the case of a palindrome spanning the whole string).</br>
Hence, for each center, the expand function could take O(n) time in the worst case.</br>
Total Time Complexity:</br></br>

Since we are calling expand for each center twice (once for odd and once for even), the total time </br>complexity is O(n) for the loop, and O(n) for the expand function call for each loop iteration.</br>
Therefore, the overall time complexity is O(n^2).</br>
Space Complexity:</br>
The space complexity is determined by the amount of extra space used in the solution.</br>
The algorithm only uses a few integer variables (count, totalCount, center), so the space used is constant,</br> i.e., O(1).</br>
There is no extra data structure (like an array or hash map) used that grows with the size of the input </br>string.</br></br></br></br></br></br></br></br></br></br></br>

![alt text](image.png)