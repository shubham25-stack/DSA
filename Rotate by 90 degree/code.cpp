class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        //transposing the matrix
        for(int i =0; i<n; i++){
            for(int j =0; j<matrix[i].size(); j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        //rotating the matrix by 90 degree

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};