class Solution {
public:
    bool isPowerOfTwo(int n) {
        double num = n;
        while(num > 0){
            if(num == 1){
                return true;
            }
            num = num/2;
        }
        return false;
    }
};