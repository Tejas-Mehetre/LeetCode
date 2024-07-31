class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map;
        vector<char> vec;
        for(int i = 0; i<s.length(); i++){
            if(map.count(s[i])){
                if(map[s[i]] != t[i]){
                    return false;
                }
            }
            else if(find(vec.begin(), vec.end(), t[i]) != vec.end()){
                return false;
            }
            else{
                map[s[i]] = t[i];
                vec.push_back(t[i]);
            }
        }
        return true;
    }
};
