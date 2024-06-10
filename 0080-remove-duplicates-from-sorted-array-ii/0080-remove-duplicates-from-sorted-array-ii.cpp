class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty input array
        
        int index = 0; // Initialize index to keep track of the position for the result
        
        for (int num : nums) {
            // If index is less than 2 or the current number is different from the two elements before it
            if (index < 2 || num > nums[index - 2]) {
                nums[index++] = num; // Place the current number at the next available position
            }
        }
        
        return index; // Return the new length
    }
};
