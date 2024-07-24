class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> map;
        for(int i = 0; i<nums.size(); i++){
            int n = 0;
            string digit = to_string(nums[i]);
            for(char num : digit){
                n = (n * 10) + mapping[num - '0'];
            }
            map.push_back({n, i});
        }

        sort(map.begin(), map.end());

        // Reconstruct the sorted nums vector
        vector<int> result(nums.size());
        int i = 0;
        for (const auto& pair : map) {
            result[i] = nums[pair.second];
            i++;
        }
        
        return result;
    }
};