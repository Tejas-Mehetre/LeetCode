class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();

        vector<int> sFreq(26, 0), pFreq(26, 0);
        vector<int> ans;

         if (m > n) return {};

        for(int i = 0; i<m; i++){
            sFreq[s[i] - 'a']++;
            pFreq[p[i] - 'a']++;
        }
        if(sFreq == pFreq) ans.push_back(0);

        for(int i = m; i<n; i++){
            sFreq[s[i] - 'a']++;
            sFreq[s[i-m] - 'a']--;

            if(sFreq == pFreq) ans.push_back(i-m+1);
        }
        return ans;
    }
};