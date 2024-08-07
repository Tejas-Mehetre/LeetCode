class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cmax = 0;
        int omax = nums[0];

        for(int i : nums){
            if(cmax < 0){
                cmax = i;
            }
            else{
                cmax += i;
            }
            omax = max(omax, cmax);
        }
        return omax;
    }
};