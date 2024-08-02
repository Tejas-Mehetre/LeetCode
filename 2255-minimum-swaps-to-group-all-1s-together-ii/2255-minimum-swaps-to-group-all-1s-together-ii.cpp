class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(2*n);

        for(int i = 0; i<2*n; i++){
            temp[i] = nums[i%n];
        }

        int totalOnes = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 1) totalOnes++;
        }

        int maxOnes = 0;
        int oneCnt = 0;

        int i = 0, j= 0;

        while(j<n*2){
            if(temp[j] == 1){
                oneCnt++;
            }

            if(j-i+1 > totalOnes){
                oneCnt -= temp[i];
                i++;
            }

            j++;
            maxOnes = max(maxOnes, oneCnt);
        }
        
        return totalOnes - maxOnes;

    }
};