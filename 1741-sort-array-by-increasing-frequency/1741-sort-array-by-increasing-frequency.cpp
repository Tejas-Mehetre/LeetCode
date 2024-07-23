class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Custom comparator for sorting
        auto comp = [&freqMap](int a, int b) {
            if (freqMap[a] == freqMap[b])
                return a > b;  // If frequencies are the same, sort by value in decreasing order
            return freqMap[a] < freqMap[b];  // Sort by frequency in increasing order
        };

        sort(nums.begin(), nums.end(), comp);

        return nums;
    }
};