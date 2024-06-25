#include <vector>
using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int flips = 0;
        int flipCount = 0;
        vector<bool> isflipped(n, false);

        for(int i = 0; i<n; i++){
            if(i >= k && isflipped[i-k] == true){
                flipCount--;
            }
            
            if(flipCount % 2 == nums[i]){
                if(i+k > n){
                    return -1;
                }

                flips++;
                flipCount++;
                isflipped[i] = true;
            }
        }
        return flips;
    }
};
