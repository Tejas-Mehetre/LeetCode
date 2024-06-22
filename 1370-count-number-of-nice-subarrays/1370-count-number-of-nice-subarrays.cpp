class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    int oddCount = 0;
    int result = 0;
    
    map[0] = 1;

    for(int num : nums){
        if(num % 2 == 1){
            oddCount++;
        }
        if(map.count(oddCount - k)){
            result += map[oddCount-k];
        }
        map[oddCount]++;
    }
    return result;
    }
};
