class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        stringstream ss(s);
        string token;
        while(ss >> token){
            res = token + " " + res;
        }
        res.pop_back();
        return res;
    }
};