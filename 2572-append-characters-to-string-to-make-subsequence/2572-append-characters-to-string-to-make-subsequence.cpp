class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
        // The number of characters that need to be appended to s
        return t.size() - j;
    }
};