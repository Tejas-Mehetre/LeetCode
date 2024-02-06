class Solution {
public:
    long long divide(long long dividend, long long divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        return dividend / divisor;
    }
};