class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cmax = 0;
        int omax = nums[0];

        for(int i = 0; i<nums.size() ; i++){
            if(cmax < 0){
                cmax = nums[i];
            }
            else{
                cmax += nums[i];
            }
            omax = max(omax , cmax);
        }
        return omax;
    }
};