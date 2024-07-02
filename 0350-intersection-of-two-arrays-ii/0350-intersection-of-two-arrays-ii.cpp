class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> num;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (nums1[i] == nums2[j]) {
                    num.push_back(nums2[j]);
                    nums2[j] = INT_MIN;  
                    break;  
                }
            }
        }

        return num;
    }
};
