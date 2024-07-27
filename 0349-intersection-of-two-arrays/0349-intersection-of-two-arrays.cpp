class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> num;
        unordered_map<int, int> map;

        for(int i = 0; i<m; i++){
            map[nums1[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(map[nums2[i]] > 0){
                num.push_back(nums2[i]);
                map[nums2[i]] = 0;
            }
        }

        return num;
    }
};
