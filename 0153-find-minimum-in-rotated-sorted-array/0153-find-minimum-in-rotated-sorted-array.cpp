class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1, mid;
        int minVal = nums[0];
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[low] <= nums[mid]){
                minVal = min(minVal , nums[low]);
                low = mid+1;
            }
            else{
                minVal = min(minVal , nums[mid]);
                high = mid - 1;
            }
        }
        return minVal;
    }
};