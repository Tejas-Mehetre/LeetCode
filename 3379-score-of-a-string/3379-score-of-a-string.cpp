class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        vector<int> vec(n);
        for(int i = 0; i<n; i++){
            vec[i] = static_cast<int>(s[i]);
        }
        int ans = 0;
        for(int i = 1; i<n; i++){
            ans += abs(vec[i-1] - vec[i]);
        }
        return ans;
    }
};