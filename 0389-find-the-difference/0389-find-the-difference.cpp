class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int> map;
        for(char x : s){
            map[x]++;
        }
        for(char x : t){
            map[x]--;
        }
        for(auto it : map){
            if(it.second != 0){
                return it.first;
            }
        }
        return -1;
    }
};