class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>map;

        for(int i : arr){
            map[i]++;
        }

        for(int i : target){
            map[i]--;
        }

        for(auto pair : map){
            if(pair.second != 0){
                return false;
            }
        }

        return true;
    }
};