class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n < 1){
            return 0;
        }
        int minprize = prices[0];
        int maxprofit = 0;
        for(int i = 1; i<n; i++){
            minprize = min(minprize, prices[i]);
            maxprofit = max(maxprofit, (prices[i] - minprize));
        }   
        return maxprofit;
    }
};