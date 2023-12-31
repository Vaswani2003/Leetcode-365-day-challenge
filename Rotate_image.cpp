/*

48. Rotate Image
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Time complexity = O(n^2) 
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i, topLeft;
        int left = 0, right = matrix.size() - 1;
        int top, bottom;

        while(left < right){
            for(i=0; i < right-left; i++){
                top = left;
                bottom = right;

                topLeft = matrix[top][left+i];

                matrix[top][left+i] = matrix[bottom-i][left];

                matrix[bottom-i][left] = matrix[bottom][right-i];

                matrix[bottom][right-i] = matrix[top+i][right];

                matrix[top+i][right] = topLeft;
                
            }
            right--;
            left++;
        }
    }
};
