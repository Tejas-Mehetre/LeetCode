class Solution {
public:

    int m, n;
    void solve(vector<vector<int>>& matrix, int i, int j){
        if(i < 0 || i >= m || j < 0 || j >= n || matrix[i][j] == 1){
            return;
        }

        matrix[i][j] = 1;

        solve(matrix, i+1, j);
        solve(matrix, i-1, j);
        solve(matrix, i, j+1);
        solve(matrix, i, j-1);
    }

    int regionsBySlashes(vector<string>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> matrix(rows*3, vector<int>(cols*3, 0));
 
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(grid[i][j] == '/'){ 
                    matrix[i*3][j*3 +2] = 1;
                    matrix[i*3 +1][j*3 +1] = 1;
                    matrix[i*3 +2][j*3] = 1;
                }
                else if(grid[i][j] == '\\'){
                    matrix[i*3][j*3] = 1;
                    matrix[i*3 +1][j*3 +1] = 1;
                    matrix[i*3 +2][j*3 +2] = 1;
                }
            }
        }

        m = matrix.size();
        n = matrix[0].size();
        int reg = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] == 0){
                    solve(matrix, i, j);
                    reg++;
                }
            }
        }
        return reg;
    }
};