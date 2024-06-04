class Solution {
public:
    int longestPalindrome(string s) {
        // Frequency map to count occurrences of each character
        unordered_map<char, int> char_count;
        
        // Count the frequency of each character
        for (char c : s) {
            char_count[c]++;
        }
        
        int length = 0;
        bool has_odd = false;

        // Iterate over the character counts
        for (const auto& entry : char_count) {
            int count = entry.second;
            // Add the pairs
            length += (count / 2) * 2;
            // Check if there's any odd count
            if (count % 2 == 1) {
                has_odd = true;
            }
        }
        
        // If there is any character with an odd count, we can add one of those in the middle
        if (has_odd) {
            length++;
        }
        
        return length;
    }
};
