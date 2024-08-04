class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subArr;

        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += nums[j];
                subArr.push_back(sum);
            }
        }
        sort(subArr.begin(), subArr.end());
        
        long long ans = 0;
        for(int i = left-1; i<right; i++){
            ans += subArr[i];
        }

        return static_cast<int>(ans % 1000000007);
    }
};