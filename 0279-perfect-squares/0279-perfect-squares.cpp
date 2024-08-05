class Solution {

    int arr[10001];
    vector<int> memo();
    int solve(int n){
        if(n == 0){
            return 0;
        }

        if(arr[n] != -1){
            return arr[n];
        }

        int ans = INT_MAX;
        for(int i = 1; i*i<=n; i++){
            int res = 1 + solve(n - i*i);
            ans = min(ans, res);
        }

        return arr[n] = ans;
    }

public:
    int numSquares(int n) {

        memset(arr, -1, sizeof(arr));
        return solve(n);
    }
};