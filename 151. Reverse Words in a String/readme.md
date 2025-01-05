PROBLEM STATEMENT:</br>
Given an input string s, reverse the order of the words.</br></br>

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.</br></br>

Return a string of the words in reverse order concatenated by a single space.</br></br>

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single </br>space separating the words. Do not include any extra spaces.</br>
</br>
Approach</br>
The code reverses the order of words in a string. Here's how it works:</br></br>

Reverse the Entire String: The entire string is reversed so that the words are reversed along with the characters.</br>
Traverse the String:</br>
Skip spaces to locate the start of a word.</br>
Copy characters of the word into their appropriate positions.</br>
Reverse each word individually as it is processed.</br>
Append a single space after each word.</br>
Trim Trailing Space: The trailing space is removed by resizing the string.</br>
Return the Result: The modified string is returned, containing words in reverse order with a single space separating them.</br></br></br>


Overall Time Complexity: O(n).</br>
Space Complexity: O(1).</br></br></br></br></br>



![Image](image.png)