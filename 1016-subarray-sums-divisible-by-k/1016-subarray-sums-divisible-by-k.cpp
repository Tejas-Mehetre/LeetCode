class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> ans;
        ans[0] = 1;
        int sum = 0;
        int cnt = 0;
        for(int num : nums){
            sum += num;
            int rem = sum % k;
            if(rem<0) rem += k;
            if(ans.count(rem)){
                cnt += ans[rem];
            }
            ans[rem]++;
        }
        return cnt;
    }
};