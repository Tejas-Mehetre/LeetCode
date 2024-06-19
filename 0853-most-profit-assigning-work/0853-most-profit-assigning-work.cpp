class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        int n = difficulty.size();
        vector<pair<int, int>> jobs;
        for(int i = 0; i<n; i++){
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());
        int totalprofit = 0, maxprofit = 0, j;
        for(int ability : worker){
            j = 0;
            while(j<n && jobs[j].first <= ability){
                maxprofit = max(maxprofit, jobs[j].second);
                j++;
            }
            totalprofit += maxprofit;
        }
        return totalprofit;
    }
};
