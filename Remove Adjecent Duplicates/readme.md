Problem Statement:</br>
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.</br></br>

We repeatedly make duplicate removals on s until we no longer can.</br></br>

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.</br></br>

Approach</br>
The algorithm uses a single pass through the string s with a while loop.</br>
It maintains a result string ans where it adds characters from s unless the current character is the same as the last character in ans.</br>
If a duplicate is found (i.e., the last character of ans matches the current character), it removes the last character from ans.</br></br>

Time Complexity</br>
O(n): The algorithm iterates through the string s exactly once, where n is the length of the string. Each character is processed in constant time.</br>
</br>
Space Complexity</br>
O(n): In the worst case, if there are no adjacent duplicates, the result string ans could end up containing all characters of s, which takes O(n) space. </br>However, in cases where duplicates are removed, the space used will be less than or equal to n.</br></br></br></br></br></br></br></br></br></br>



![alt text](<Screenshot 2025-02-13 012017.png>)