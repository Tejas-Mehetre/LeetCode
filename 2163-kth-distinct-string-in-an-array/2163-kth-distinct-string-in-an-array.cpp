class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;

        for(string str : arr){
            map[str]++;
        }

        for(string str : arr){
            if(map[str] == 1){
                if(k == 1) return str;
                else k -= 1;
            }
        }

        return "";
    }
};