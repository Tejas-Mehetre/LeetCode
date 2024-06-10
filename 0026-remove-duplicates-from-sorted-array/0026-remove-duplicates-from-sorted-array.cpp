class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> ans;
        int ind = 0;
        for(int num : nums){
            if(!ans.count(num)){
                nums[ind++] = num;
                ans[num]++;
            }
        }
        return ind;
    }
};