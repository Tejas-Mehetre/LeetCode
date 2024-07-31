class Solution {
public:
    bool isPowerOfTwo(int n) {
        //***********Approach 1***********
        // double num = n;
        // while(num > 0){
        //     if(num == 1){
        //         return true;
        //     }
        //     num = num/2;
        // }
        // return false;

        //***********Approach 2***********
        return (n > 0 && (n & (n-1)) == 0) ? true : false;
    }
};