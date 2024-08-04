class Solution {
public:
    int n;

    vector<int> memo;

    int solve(vector<int>& nums, int i){
        if(i >= n){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }

        int rob = 0;
        int skip = 0;

        rob = nums[i] + solve(nums, i+2);

        skip = solve(nums, i+1);

        return memo[i] = max(rob , skip);
    }

    int rob(vector<int>& nums) {
        n = nums.size();

        memo.resize(n, -1);
        int i = 0;
        return solve(nums, i);
    }
};