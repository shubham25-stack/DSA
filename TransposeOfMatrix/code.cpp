#include <vector>
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>rev(matrix[0].size(),(vector<int>(matrix.size())));
        
        int row = matrix.size();
        int col =matrix[0].size();

        for(int i=0; i<row; i++){
            for(int j = 0; j<col; j++){
               rev[j][i] = matrix[i][j];
            }
        }
        return rev;
    }
};