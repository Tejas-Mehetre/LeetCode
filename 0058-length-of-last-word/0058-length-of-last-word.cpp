class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int i = n;
        int size = 0;

        while(i >= 0){
            if(s[i] == ' '){
                i--;
                if(size > 0){
                    break;
                }
            }
            else{ 
                size++;
                i--;
            }
        }

        return size;
    }
};