class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = grumpy.size();
        int satisfied = 0;
        int addCustSatisfied = 0;
        int maxCustSatisfied = 0;
        for(int i = 0; i<n; i++){
            if(grumpy[i] == 0){
                satisfied += customers[i];
            }
        }
        for(int i = 0; i<n; i++){
            if(grumpy[i] == 1){
                addCustSatisfied += customers[i];
            }

            if(i >= minutes){
                if(grumpy[i-minutes] == 1){
                    addCustSatisfied -= customers[i-minutes];
                }
            }
            maxCustSatisfied = max(maxCustSatisfied, addCustSatisfied);
        }
        return maxCustSatisfied + satisfied;
    }
};