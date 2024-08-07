class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> map;

        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            map[key].push_back(s);
        }

        for(auto pair : map){
            ans.push_back(pair.second);
        }

        return ans;
    }
};