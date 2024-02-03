class Solution {
public:
    int findmax(vector<int>& nums){
        int n = nums.size(), maxi = 0;
        for(int i = 0; i<n; i++){
            maxi = max(nums[i], maxi);
        }
        return maxi;
    }
    int addition(vector<int>& nums, int mid) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil(static_cast<double>(nums[i]) / mid);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size(), ans = 0;
        int low = 1, high = findmax(nums), mid;
        while(low <= high){
            mid = (low + high)/2;
            int add = addition(nums , mid);
            if(add > threshold){
                low = mid+1;
            }
            else{
                high = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};