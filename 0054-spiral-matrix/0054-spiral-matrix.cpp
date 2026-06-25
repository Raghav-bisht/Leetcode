class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        

        int startingRow = 0;
        int endingRow = matrix.size() - 1;
        int startingCol = 0;
        int endingCol = matrix[0].size() - 1;

        while (startingRow <= endingRow && startingCol <= endingCol) {
            
         
            for (int j = startingCol; j <= endingCol; j++) {
                ans.push_back(matrix[startingRow][j]);
            }
            startingRow++;
           
          
            for (int i = startingRow; i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
            }
            endingCol--;
            
         
            if (startingRow <= endingRow) {
                for (int j = endingCol; j >= startingCol; j--) {
                    ans.push_back(matrix[endingRow][j]);
                }
                endingRow--;
            }
                
         
            if (startingCol <= endingCol) {
                for (int i = endingRow; i >= startingRow; i--) {
                    ans.push_back(matrix[i][startingCol]);
                }
                startingCol++;
            }
        } 
        return ans;
    } 
}; 