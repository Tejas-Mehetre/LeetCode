class Solution {
public:
    int n;
    int width;
    int t[1001][1001];

    int solve(vector<vector<int>>& books, int i, int remainW, int maxHt){
        // Base case: all books have been considered
        if(i >= n){
            return maxHt;
        }

        // Check memoization table
        if(t[i][remainW] != -1) return t[i][remainW];

        int bookW = books[i][0];
        int bookH = books[i][1];

        int keep = INT_MAX;
        int skip = INT_MAX;

        // Option 1: Place the current book on the current shelf
        if(bookW <= remainW){
            keep = solve(books, i+1, remainW - bookW, max(maxHt, bookH));
        }

        // Option 2: Skip to a new shelf
        skip = maxHt + solve(books, i+1, width - bookW, bookH);

        // Store the result in the memoization table and return the minimum height
        return t[i][remainW] = min(keep, skip);
    }

    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        memset(t, -1, sizeof(t));
        n = books.size();
        width = shelfWidth;
        
        return solve(books, 0, shelfWidth, 0);
    }
};
