class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all = 0;
        for(int num : nums){
            xor_all ^= num;
        }
        int rightmost_set_bit;
        
        if (xor_all == INT_MIN) {
            rightmost_set_bit = 1 << 31;
        } else {
            rightmost_set_bit = xor_all & -xor_all;
        }

        int num1 = 0, num2 = 0;

        for(int num : nums){
            if(num & rightmost_set_bit){
                num1 ^= num;
            }
            else{
                num2 ^= num;
            }
        }
        return {num1, num2};
    }
};