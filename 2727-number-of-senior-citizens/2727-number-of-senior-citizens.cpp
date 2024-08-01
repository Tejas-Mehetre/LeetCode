class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(const string& str : details){
            int age = (str[11] - '0') * 10 + (str[12] - '0');
            if(age > 60){
                count++;
            }
        }
        return count;
    }
};