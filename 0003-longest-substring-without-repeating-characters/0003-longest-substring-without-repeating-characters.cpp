class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int n = s.length();
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < n; ++right) {
            if (map.find(s[right]) != map.end()) {
                left = max(left, map[s[right]] + 1);
            }

            map[s[right]] = right;

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};