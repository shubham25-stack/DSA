PROBLEM STATEMENT:</br>
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is</br> longer than the other, append the additional letters onto the end of the merged string.</br></br>

Return the merged string.</br>
</br>
Approach</br>
We traverse both strings simultaneously using an index i. At each step:</br>
</br>
Add the character from word1 if i is within its bounds.</br>
Add the character from word2 if i is within its bounds.</br>
Continue until both strings are completely traversed.</br>
</br>
Time Complexity</br>
Operation per character:</br></br>

Each character in word1 and word2 is accessed exactly once.</br>
String concatenation is performed for each character, which takes O(1) </br>
in modern C++ implementations using efficient dynamic array allocation.</br>
Total characters processed:</br></br>

Let n = word1.length() and m = word2.length(). The total number of iterations is </br>
max(n,m).</br>
Time Complexity: O(max(n,m))</br>
</br>
Space Complexity</br>
Auxiliary space:</br>
</br>
A new string result is created to store the merged result, with a size equal to n+m.</br>
Aside from the result string, only constant extra space is used (e.g., for the index i).</br>
Space Complexity: O(n+m)</br>

</br></br></br></br></br></br></br>


![alt text](image.png)