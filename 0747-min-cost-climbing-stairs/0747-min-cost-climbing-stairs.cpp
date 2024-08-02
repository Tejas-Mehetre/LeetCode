class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 0) return 0;
        if(n == 1) return 1;

        vector<int> res(n);

        res[0] = cost[0];
        res[1] = cost[1];

        for(int i = 2; i<n; i++){
            res[i] = cost[i] + min(res[i-1], res[i-2]);
        }

        return min(res[n-1], res[n-2]);
    }
};