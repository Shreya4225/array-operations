class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        
        int row = n;
        int col = n;
        int count = 1;
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = n - 1;
        
        while (count <= n * n) {
            // Traverse right
            for (int i = startingCol; i <= endingCol; i++) {
                matrix[startingRow][i] = count++;
            }
            startingRow++;
            
            // Traverse down
            for (int i = startingRow; i <= endingRow; i++) {
                matrix[i][endingCol] = count++;
            }
            endingCol--;
            
            // Traverse left
            for (int i = endingCol; i >= startingCol; i--) {
                matrix[endingRow][i] = count++;
            }
            endingRow--;
            
            // Traverse up
            for (int i = endingRow; i >= startingRow; i--) {
                matrix[i][startingCol] = count++;
            }
            startingCol++;
        }
        
        return matrix;
    }
};
