class Solution {
public:
    int n;
    vector<int> memo;
    bool solve(vector<int>& nums, int idx){
        if(idx == n-1){
            return true;
        }

        if(memo[idx] != -1){
            return memo[idx];
        }

        for(int i = 1; i<=nums[idx]; i++){
            if(solve(nums, i+idx) == true){
                return memo[idx] = true;
            }
        }

        return memo[idx] = false;
    }

    bool canJump(vector<int>& nums) {
        n = nums.size();
        memo.resize(10000, -1);
        int idx = 0;
        return solve(nums, idx);
    }
};