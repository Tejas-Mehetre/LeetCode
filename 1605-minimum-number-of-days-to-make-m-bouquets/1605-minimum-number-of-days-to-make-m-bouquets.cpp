class Solution {
public:

    bool possible(vector<int>& bloomDay, int m, int k, int day){
        int count = 0, total = 0;
        for(int i = 0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                count++;
            }
            else{
                total += (count / k);
                count = 0;
            }
        }
        total += (count / k);
        return total >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long val = static_cast<long>(m) * k;
        if(val > n) return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        } 
        int low = mini, high = maxi, mid, ans;
        while(low <= high){
            mid = (low + high) / 2;
            if(possible(bloomDay, m, k, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1; 
            }
        }
        return ans;
    }
}; 