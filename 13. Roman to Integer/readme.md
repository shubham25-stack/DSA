Approach Analysis</br>
The goal of this function is to convert a Roman numeral string into an integer. The Roman numeral system uses specific rules to </br>determine how characters contribute to the final integer value.</br></br>

Mapping Roman Numerals to Integers:</br></br>

An unordered map m is used to store the integer values of Roman numeral characters ('I', 'V', 'X', etc.).</br>
Iterating Through the String:</br></br>

Iterate through each character in the input string s.</br>
For each character:</br>
If the value of the current character is less than the value of the next character, it means the current character is part of a</br> subtractive combination (e.g., IV where I < V).</br>
Subtract the value of the current character from the result (ans -= m[s[i]]).</br>
Otherwise, add the value of the current character to the result (ans += m[s[i]]).</br>
Final Result:</br></br>

By the end of the loop, the ans variable contains the integer equivalent of the Roman numeral.</br></br></br>
Time Complexity: O(n) where n is the length of the input string</br>
</br>
Space Complexity Analysis: O(1), as the map and auxilary variables require constant space </br></br><br></br></br>

![alt text](image.png)