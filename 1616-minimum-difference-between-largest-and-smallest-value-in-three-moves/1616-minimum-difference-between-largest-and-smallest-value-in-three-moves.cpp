#include <algorithm>
#include <vector>

class Solution {
public:
    int minDifference(std::vector<int>& nums) {
        int n = nums.size();

        // If the size of nums is less than 5, we can remove all elements to get a difference of 0.
        if (n < 5) return 0;

        // Sort the array
        std::sort(nums.begin(), nums.end());

        // Calculate the differences for the four cases
        int case1 = nums[n-1] - nums[3];
        int case2 = nums[n-2] - nums[2];
        int case3 = nums[n-3] - nums[1];
        int case4 = nums[n-4] - nums[0];

        // Return the minimum difference
        return std::min({case1, case2, case3, case4});
    }
};
