class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>map;

        for(int i= 0 ; i<target.size(); i++){
            map[arr[i]]++;
            map[target[i]]--;
        }

        for(auto pair : map){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};