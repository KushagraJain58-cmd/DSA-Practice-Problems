/*                    LEETCODE PROBLEM: 54
                       Spiral Matrix
                   
https://leetcode.com/problems/rotate-image/
  
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/
class Solution {
  
 public:
vector<int> spiralOrder(vector<vector<int>>& matrix) { 
            vector<int> ans;
        
            int row_start=0, row_end= matrix.size()-1, col_end= matrix[0].size()-1,col_start=0;
        while( row_start<=row_end && col_start<=col_end){
            
            // upper row left to right
            if(row_start<=row_end)
                 for( int i=col_start; i<= col_end; i++){
                 ans.push_back(matrix[row_start][i]);
            }
            row_start++;
            
            
            // right top to bottom
           if( col_start<=col_end)
                 for( int i=row_start; i<=row_end; i++){
                 ans.push_back(matrix[i][col_end]);
            }
            col_end--;
            
            // bottom right to left 
             if( row_start<=row_end)
                 for( int i=col_end; i>=col_start; i--){
                 ans.push_back(matrix[row_end][i]);
            }
            row_end--;
            
            // left bottom to top
            if( col_start<=col_end)
                 for( int i=row_end; i>=row_start; i--){
                 ans.push_back(matrix[i][col_start]);
            }
            col_start++;
            
           
        }
        return ans;
    }
};
