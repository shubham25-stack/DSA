Process:
</br>
Initialize left = 0, right = 0, best = INT_MIN.
</br>
Traverse the string:
</br>
At index 0 ('0'): left = 1, right = 0, best = max(INT_MIN, 1 - 0) = 1.
</br>
At index 1 ('1'): left = 1, right = 1, best = max(1, 1 - 1) = 1.
</br>
At index 2 ('1'): left = 1, right = 2, best = max(1, 1 - 2) = 1.
</br>
At index 3 ('1'): left = 1, right = 3, best = max(1, 1 - 3) = 1.
</br>
At index 4 ('0'): left = 2, right = 3, best = max(1, 2 - 3) = 1.
</br>
Process the last character ('1'): right = 4.
</br>
Final score = best + right = 1 + 4 = 5.
</br>
.
Complexity Analysis
</br>
Time Complexity:
</br>
O(n): The algorithm traverses the string once to calculate the score for each possible split.
</br></br>
Space Complexity:
</br>
O(1): No additional data structures are used; only counters and variables are maintained.
</br>
</br>

![alt text](image.png)
