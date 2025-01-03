Problem Statement:</br>
Given a number positive number N, find the value of f0 + f1 + f2 +... + fN where fi indicates ith Fibonacci number.</br>
Remember that f0 = 0, f1 = 1, f2 = 1, f3 = 2, f4 = 3, f5 = 5,</br>
Since the answer can be very large, the answer takes modulo with 1000000007 and returned.</br>
</br></br>

Optimized Alternative:</br>
If space efficiency is critical, the dp array can be replaced by two variables (prev1 and prev2) to store the last two Fibonacci</br> numbers, reducing space complexity to O(1).</br>

Time Complexity:</br>
Calculating Fibonacci numbers and their sum in a single loop requires </br>
O(N) operations.</br>
Overall Time Complexity: O(N).</br></br>
Space Complexity:</br>
The dp array of size N+1 is used to store Fibonacci numbers.</br></br>
Overall Space Complexity: O(N).</br>
</br></br></br></br></br>
![alt text](image.png)