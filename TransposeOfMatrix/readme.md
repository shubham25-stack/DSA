Problem Statrement:</br>
Given a 2D integer array matrix, return the transpose of matrix.</br></br>

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.</br></br></br>



Approach
Create a new matrix rev with dimensions equal to the transpose of the original matrix.</br>
Iterate through each element of the original matrix.</br>
Assign the element at position (i, j) in the original matrix to position (j, i) in the new matrix.</br>
Return the new matrix.</br></br></br>


Complexity</br>
Time complexity: O(n×m), where n is the number of rows and m is the number of columns in the original matrix. This is because we need to </br>iterate through each element of the matrix once.</br>
Space complexity: O(n×m), where n is the number of rows and m is the number of columns in the original matrix. This is because we are</br> creating a new matrix to store the transposed result.</br></br></br></br></br></br></br></br></br>


![alt text](image.png)