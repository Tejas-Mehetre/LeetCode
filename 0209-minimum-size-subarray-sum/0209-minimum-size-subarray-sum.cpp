class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        auto sz = nums.size();
        if (sz == 1)
            return nums[0] >= target;

        int left = 0, right = 0, count = 0, min_len = INT_MAX;

        for (; right < sz; ++right)
        {
            count += nums[right];

            // if we are on target, shorten the subarray to its min length
            while (count - nums[left] >= target and left < right)
            {
                count -= nums[left];
                left += 1;

                // min_len = std::min(min_len, right - left + 1);
            }

            if (count >= target)
                min_len = std::min(min_len, right - left + 1);
        }

        return min_len == INT_MAX ? 0 : min_len;
    }
};