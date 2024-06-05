#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);  // Initialize ans with all elements set to 1

        // Forward pass: calculate the product of all elements to the left of each element
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            ans[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // Backward pass: calculate the product of all elements to the right of each element
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return ans;
    }
};
