Fibonacci Expression</br></br>

Given a number N, evaluate the following </br>expression. </br>
f(n-1)*f(n+1) - f(n)*f(n) where f(n) is the </br>n-th Fibonacci number with n >= 1.</br>
Fibonacci Sequence is 0, 1, 1, 2, 3, 5, 8, 13,… </br>(here 0 is the 0th Fibonacci number)</br></br></br>
Approach:</br>
Expression Simplification: Using the Fibonacci identity:</br>

f(N−1)⋅f(N+1)−f(N)⋅f(N)=(−1) 
N</br>
 
This identity holds for all </br>
N≥1.</br>
</br>
The code leverages this property without </br>explicitly calculating the Fibonacci numbers.

Code Logic:</br>
f(n+1)*f(n-1) - f(n)*f(n)

<b>Time and Space Complexity:</b><br><br>
Time Complexity:<br><br>

The code executes a single modulus operation </br>and a conditional check, both </br>

O(1).</br>
Overall Time Complexity: <br>
O(1).
<br><br>
Space Complexity:<br><br>

No additional data structures or significant</br> memory allocations are used.</br>
Overall Space Complexity: <br>
𝑂(1).</br></br></br></br></br>

![alt text](image.png)