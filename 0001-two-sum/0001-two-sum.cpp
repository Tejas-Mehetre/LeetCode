class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans;
        map[nums[0]] = 0;
        for(int i = 1; i<nums.size(); i++){
            bool flag = false;
            for(auto it : map){
                if((it.first + nums[i]) == target){
                    ans.push_back(it.second);
                    ans.push_back(i);
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                map[nums[i]] = i;
            }
        }
        return ans;
    }
};