class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> good;
        good[0] = -1;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            if(good.count(sum%k)){
                int index = good[sum%k];
                if(i-index>=2){
                    return true;
                }
            }
            else{
                good[sum%k] = i;
            }
        }
        return false;
    }
};
