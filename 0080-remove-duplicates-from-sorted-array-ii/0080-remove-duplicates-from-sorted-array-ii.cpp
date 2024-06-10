class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int index = 0;
        for(int num : nums){
            if(index < 2 || nums[index-2] < num){
                nums[index++] = num;
            }
        }
        return index;
    }
};
