class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(string log : logs){
            if(log == "../"){
                if(count != 0){
                    count--;
                }
                else{
                    continue;
                }
            }
            else if(log == "./"){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};