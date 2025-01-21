PROBLEM STATEMENTS:</br>
Given a non-empty array of integers nums, every </br>element appears twice except for one. Find that</br> single one.</br></br>

You must implement a solution with a linear </br>runtime complexity and use only constant extra </br>space.</br></br>

</br>
To use this approach you first need to </br>understand about Bitwise XOR operator.</br>
Most of us who have a background in physics </br>( highschool level ) , are aware of the </br>LOGIC GATES.</br>
One of such gates is the XOR Gate :</br>
According to this gate , the output is true , </br>only if both the inputs are of opposite </br>kind .</br>
That is ,</br>
A B Y</br>
0 0 0</br>
0 1 1</br>
1 0 1</br>
1 1 0</br></br>

We apply the extended version of this gate in </br>our bitwise XOR operator.</br>
If we do "a^b" , it means that we are applying</br> the XOR gate on the 2 numbers in a bitwise </br>fashion ( on each of the corresponding </br>bits of the numbers).</br>
Similarly , if we observe ,</br></br>

A^A=0</br>
A^B^A=B</br>
(A^A^B) = (B^A^A) = (A^B^A) = B This shows that </br>position doesn't matter.</br>
Similarly , if we see , a^a^a......... (even </br>times)=0 and a^a^a........(odd times)=a</br>
Google It for more details.</br>
</br>
We apply the above observations :</br>
</br>
Traverse the array and take the Bitwise XOR of</br> each element.</br>
Return the value.</br></br></br>


Complexity:</br></br>

Time Complexity: O(N)</br>
Space Complexity: O(1)</br></br></br></br></br></br></br></br></br>

![alt text](image.png)