class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        unordered_map<int,int> map2;
        for(int i : arr){
            map[i]++;
        }
        for(auto pair : map){
            if(map2.count(pair.second)){
                return false;
            }
            else{
                map2[pair.second]++;
            }
        }
        return true;
    }
};