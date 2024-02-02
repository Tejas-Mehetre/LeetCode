class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while(i<n && s[i] == ' '){
            i++;
        }

        int sign = 1;
        if(i<n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i++] == '-') ? -1 : 1;
        }

        int res, ans = 0;
        while(i<n){
            if(isdigit(s[i])){
                res = s[i] - '0';
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && res > INT_MAX % 10)) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                ans = ans * 10 + res;
                i++;
            }
            else{
                break;
            }
        }
        return ans* sign;
    }
};
