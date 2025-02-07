Problem Statement:</br>
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of </br>haystack.</br></br>

Approach :</br>
Calculate the lengths of haystack and needle.</br>
Iterate through haystack up to the index where a substring could match needle (i.e., up to len(haystack) - len(needle) + 1).</br>
For each starting index, check if the substring from this index matches needle.</br>
If a match is found, return the current index.</br>
If no match is found by the end, return -1.</br></br></br>


Complexity :</br>
Time Complexity: (O((m - n + 1) \times n)), where (m) is the length of haystack and (n) is the length of needle.</br>
Space Complexity: (O(1)), as we are not using any additional data structures. </br>
</br></br></br></br></br></br></br></br></br></br></br>

![alt text](image.png)