class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> vec;
        int start;

        for(int i = 0; i<n; i++){
            int start = nums[i];
            
            while(i<n-1 && nums[i] + 1 == nums[i+1]){
                i++;
            }

            if(start == nums[i]){
                vec.push_back(to_string(start));
            }
            else{
                vec.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
        }
        return vec;
    }
};