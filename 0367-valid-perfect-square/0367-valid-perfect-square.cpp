class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        long long low = 1 , high = num / 2 , mid;
        while(low <= high){
            mid = (low + high) / 2;
            long long ans = mid * mid;
            if(ans == num){
                return true;
            }
            else if(ans > num){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};