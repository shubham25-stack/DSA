1930. Unique Length-3 Palindromic Subsequences</br>
Given a string s, return the number of unique palindromes of length three that are a subsequence of s.</br></br>

Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.</br></br>

A palindrome is a string that reads the same forwards and backwards.</br></br>

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing </br>the relative order of the remaining characters.</br></br>

For example, "ace" is a subsequence of "abcde".</br></br></br>

Approach</br>
The goal of the code is to count unique palindromic subsequences of length 3 in a given string s.</br>
 A subsequence is palindromic if it reads the same forwards and backwards.</br>
</br>
Steps:</br>
Initialize Frequency Vectors:</br></br>

R: Tracks the frequency of each character from the current index to the end of the string.</br>
L: Tracks the frequency of each character from the beginning of the string to the current index.</br>
Initially, R is populated with the frequency of each character in s, while L is initialized to zero.</br></br>

Iterate Through the String:</br></br>

For each character s[i], update the frequency vectors:</br>
Decrement the frequency of s[i] in R since it's now in the "left" portion.</br>
Increment the frequency of s[i] in L.</br>
For each character </br>
j ('a' to 'z'), check if it appears both in L and R. If so, it can form a palindromic subsequence of the form:</br>
jtj, where t=s[i].</br>
Use an unordered set S to store unique palindromic subsequences. Each subsequence is represented as </br>
26×t+j, ensuring uniqueness.</br>
Return Result:</br>
</br>
The size of the set S represents the count of unique palindromic subsequences</br></br></br>

Time Complexity: O(n)</br></br>
Space Complexity: O(1)</br></br>

![alt text](image.png)