12. Integer to Roman
</br></br>
Seven different symbols represent Roman numerals with the following values:</br></br>
Approach:</br>
The goal is to convert an integer to its Roman numeral representation. Roman numerals are represented using specific symbols with fixed </br>values. This solution uses a greedy approach to repeatedly subtract the largest possible value while appending the corresponding Roman</br> numeral to the result string.</br>
</br>
Steps:</br>
Mapping Values to Symbols:</br>
Use a vector of pairs (valueSymbols) where each pair contains:</br>
The value of a Roman numeral (e.g. 1000,900,500,1000,900,500,…).</br>
Its corresponding Roman numeral symbol (e.g., "M", "CM", "D", etc.).</br>
Greedy Conversion:</br></br>

Iterate through the valueSymbols vector.</br>
While the number is greater than or equal to the current value:</br>
Append the Roman numeral symbol to the result string.</br>
Subtract the current value from the number.</br>x

Stop the loop if the number becomes zero.</br>
Return the Result:</br></br>

The accumulated string represents the Roman numeral equivalent of the input integer.
</br></br>
Time Complexity: O(1) </br>
Space Complexity: O(1).</br></br></br></br></br>

![alt text](image.png)