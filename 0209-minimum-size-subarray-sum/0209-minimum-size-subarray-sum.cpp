class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int ans = INT_MAX;
        int i = 0, j = 0;
        
        while(j < nums.size()) {
            sum += nums[j];
            j++;
            
            while(sum >= target) {
                ans = min(ans, j - i);
                sum -= nums[i];
                i++;
            }
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};
