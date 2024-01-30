class Solution {
public:
    int reverse(int x) {
        int MIN = INT_MIN;;
        int MAX = INT_MAX;
        long long rem , ans = 0;
        while(x != 0){
            rem = x % 10;
            ans = (ans*10) + rem;
            x = x/10;
        }
        if(ans < INT_MIN || ans > INT_MAX){
            return 0;
        }
        return static_cast<int>(ans);
    }
};
