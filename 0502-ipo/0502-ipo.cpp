class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> projects(n);
        for(int i = 0; i<n; i++){
            projects[i] = {capital[i], profits[i]};
        }
        sort(projects.begin(), projects.end());

        int projectIndex = 0;

        priority_queue<int> pq;
        while(k--){
            while(projectIndex < n && projects[projectIndex].first <= w){
                pq.push(projects[projectIndex].second);
                projectIndex++;
            }
            if(pq.empty()){
                break;
            }
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};