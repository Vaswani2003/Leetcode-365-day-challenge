/*
73. Set Matrix Zeroes

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        int r, c;
        bool rowZero = false;

        for(r = 0; r < rows; r++){
            for(c = 0; c< columns; c++){
                if (matrix[r][c] == 0){
                    if (r>0){
                    matrix[0][c] = 0;
                    matrix[r][0] = 0;
                    }
                    else
                        rowZero = true ;
                }
            }
        }

        for(r=1;r<rows;r++){
            for(c=1;c<columns;c++){
                if ((matrix[0][c] == 0)||(matrix[r][0] == 0))   matrix[r][c] = 0;
            }
        }

        if(matrix[0][0] == 0){
            for(r=0;r<rows;r++) matrix[r][0] = 0;
        }
        if(rowZero){
            for(c=0;c<columns;c++)  matrix[0][c] = 0;
        }
    }
};
