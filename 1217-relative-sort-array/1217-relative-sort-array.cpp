class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> map;
        vector<int> ans;
        vector<int> rem;
        for(int num : arr1){
            map[num]++;
        }
        for(int num : arr2){
            while(map[num] > 0){
                ans.push_back(num);
                map[num]--;
            }
        }
        for(auto& pair : map){
            while(pair.second > 0){
                rem.push_back(pair.first);
                pair.second--;
            }
        }
        sort(rem.begin(), rem.end());
        ans.insert(ans.end(), rem.begin(), rem.end());
        return ans;
    }
};