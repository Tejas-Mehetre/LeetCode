class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int n = citations.size();
        for(int i = 0; i<n; i++){
            if(citations[i] < i+1){
                return i;
            }
        }
        return n;
    }
};