class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(m == 0){
            return true;
        }
        int i = 0, j = 0;
        while(j<n){
            if(s[i] == t[j]){
                i++;
                if(i == m){
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};