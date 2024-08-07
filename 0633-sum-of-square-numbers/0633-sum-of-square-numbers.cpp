class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long i = 0; i*i<=c; i++){
            long b = c - i*i;
            double sqrt_b = sqrt(b);
            if(sqrt_b == (int)sqrt_b){
                return true;
            }
        }
        return false;


        //Method 2
        // if(c == 0) return true;
        // unordered_map<long long, long long>map;
        // for(long i = 0; i*i<c; i++){
        //     map[i*i]++;
        // }

        // for(long i = 0; i*i<=c; i++){
        //     long long val = c - (i*i);
        //     if(map.count(val)) return true;
        // }
        // return false;
    }
};