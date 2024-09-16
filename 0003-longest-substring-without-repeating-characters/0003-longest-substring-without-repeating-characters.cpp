class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> map;
        int left = 0;
        int maxLen = 0;

        for(int rt = 0; rt<s.length(); rt++){
            if(map.find(s[rt]) != map.end()){
                left = max(left, map[s[rt]] + 1);
            }
            map[s[rt]] = rt;

            maxLen = max(maxLen, rt - left + 1);
        }
        return maxLen;
    }
};