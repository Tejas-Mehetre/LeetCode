class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        int orderStart = customers[0][0];
        int orderEnd = 0;
        double time = 0;
        for(int i = 0; i<n; i++){
            orderEnd = orderStart + customers[i][1];
            orderStart = orderEnd;
            time += (orderEnd - customers[i][0]);
            if(i<n-1 && orderEnd < customers[i+1][0]){
                orderStart = customers[i+1][0];
            }
        }

        return time/n;
    }
};