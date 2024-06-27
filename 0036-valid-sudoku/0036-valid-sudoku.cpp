class Solution {
public:
    bool validate(vector<vector<char>>& board, int sr, int sc, int er, int ec) {
        set<char> st;
        for (int i = sr; i < er; i++) {
            for (int j = sc; j < ec; j++) {
                if (board[i][j] == '.') continue;
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // Validate rows
        for (int row = 0; row < 9; row++) {
            set<char> st;
            for (int i = 0; i < 9; i++) {
                if (board[row][i] == '.') continue;
                if (st.find(board[row][i]) != st.end()) {
                    return false;
                }
                st.insert(board[row][i]);
            }
        }

        // Validate columns
        for (int col = 0; col < 9; col++) {
            set<char> st;
            for (int i = 0; i < 9; i++) {
                if (board[i][col] == '.') continue;
                if (st.find(board[i][col]) != st.end()) {
                    return false;
                }
                st.insert(board[i][col]);
            }
        }

        // Validate sub-boxes
        for (int sr = 0; sr < 9; sr += 3) {
            for (int sc = 0; sc < 9; sc += 3) {
                if (!validate(board, sr, sc, sr + 3, sc + 3)) return false;
            }
        }

        return true;
    }
};
