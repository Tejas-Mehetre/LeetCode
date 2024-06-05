class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,INT_MAX);
        for(auto s: words){
            vector<int> cnt(26,0);
            for(char c: s){
                cnt[c - 'a']++;
            }
            for(int i = 0; i<26; i++){
                common[i] = min(cnt[i], common[i]);
            }
        }
        vector<string> ans;
        for(int i = 0; i<26; i++){
            while(common[i]>0){
                ans.push_back(string(1, i + 'a'));
                common[i]--;
            }
        }
        return ans;
    }
};