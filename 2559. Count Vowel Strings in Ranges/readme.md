<b>Approach</b></br></br>
The problem is to find the number of words that start and end with vowels within specified ranges of indices in the words array for</br> multiple queries.</br></br>

Preprocessing with Prefix Sum:</br></br>

Create a prefix sum array Pre, where Pre[i] represents the count of words that </br>
start and end with vowels from the start up to the i-thindex.</br>
For each word, check if the first and last characters are vowels using a set of vowels ({'a', 'e', 'i', 'o', 'u'}). If the condition is </br>satisfied, increment the prefix sum at that index.</br>
Answering Queries:</br></br>

For each query [L, R], calculate the number of valid words in the range [L, R] using the formula:
</br>
</br>
![alt text](image.png)
</br>
Count=Pre[R+1]−Pre[L]</br>
Store the result for each query in the ANS array.</br>
</br></br></br></br></br></br></br>
</br></br>
![image](<Screenshot 2025-01-02 220737.png>)