class Solution {
public:
    int maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
        int n = difficulty.size();
        std::vector<std::pair<int, int>> jobs;
        
        // Combine difficulty and profit into a pair and sort by difficulty
        for (int i = 0; i < n; ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        std::sort(jobs.begin(), jobs.end());

        // Sort workers by their ability
        std::sort(worker.begin(), worker.end());

        int maxProfit = 0;
        int totalProfit = 0;
        int j = 0;

        // Iterate over each worker
        for (int ability : worker) {
            // Update the maxProfit for jobs that the worker can perform
            while (j < n && jobs[j].first <= ability) {
                maxProfit = std::max(maxProfit, jobs[j].second);
                ++j;
            }
            // Add the maxProfit for the current worker's ability
            totalProfit += maxProfit;
        }

        return totalProfit;
    }
};
