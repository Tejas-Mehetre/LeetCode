class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        // Directions for the 8 neighboring cells
        vector<vector<int>> directions = {{-1, -1}, {-1, 0}, {-1, 1},
                                          {0, -1},          {0, 1},
                                          {1, -1}, {1, 0}, {1, 1}};
        
        // Iterate through each cell in the board
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveNeighbors = 0;
                
                // Count live neighbors
                for (auto dir : directions) {
                    int x = i + dir[0];
                    int y = j + dir[1];
                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        // Original state 1 is encoded as 1 or 3 in the new state
                        liveNeighbors += (board[x][y] & 1);
                    }
                }
                
                // Apply the rules
                if ((board[i][j] & 1) && (liveNeighbors < 2 || liveNeighbors > 3)) {
                    // Live cell dies
                    board[i][j] = 1; // Was live, will be dead (01 -> 01)
                }
                if ((board[i][j] & 1) && (liveNeighbors == 2 || liveNeighbors == 3)) {
                    // Live cell stays alive
                    board[i][j] = 3; // Was live, stays live (01 -> 11)
                }
                if (!(board[i][j] & 1) && liveNeighbors == 3) {
                    // Dead cell becomes live
                    board[i][j] = 2; // Was dead, will be live (00 -> 10)
                }
            }
        }
        
        // Update the board to the next state
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] >>= 1; // Get the next state
            }
        }
    }
};
