
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanVal = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int result = 0;
        int prevVal = 0;
        for(int i = s.length() - 1; i>=0; i--){
            int currVal = romanVal[s[i]];
            if(currVal < prevVal){
                result -= currVal;
            }
            else{
                result += currVal; 
            }
            prevVal = currVal;
        }
        return result;
    }
};