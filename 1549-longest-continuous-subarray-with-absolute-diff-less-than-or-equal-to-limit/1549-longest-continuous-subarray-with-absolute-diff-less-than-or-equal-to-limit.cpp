class Solution {
public:
    typedef pair<int, int> P;
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        priority_queue<P, vector<P>> maxPq;
        priority_queue<P, vector<P>, greater<P>> minPq;

        int i = 0, j = 0, maxLen = 0;
        while(j<n){

            maxPq.push({nums[j], j});
            minPq.push({nums[j], j});

            while((maxPq.top().first - minPq.top().first) > limit){
                i = min(maxPq.top().second, minPq.top().second) + 1;

                while(maxPq.top().second < i){
                    maxPq.pop(); 
                }

                while(minPq.top().second < i){
                    minPq.pop();
                }
            }
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        return maxLen;
    }
};