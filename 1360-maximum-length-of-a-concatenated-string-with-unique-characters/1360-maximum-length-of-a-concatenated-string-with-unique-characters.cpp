class Solution {
public:

    int isPossible(string str, string temp){
        unordered_map<char, int> map;
        for(char c : temp){
            if(map[c] == 0) map[c]++;
            else return false;
        }

        for(char c : str){
            if(map[c] == 0) map[c]++;
            else return false;
        }

        return true;
    }

    int solve(vector<string>& arr, int n, int i, string temp){
        if(i >= n){
            return temp.length();
        }

        int inc = 0, exc = 0;

        if(isPossible(arr[i], temp)){
            inc = solve(arr, n, i+1, temp+arr[i]);
            exc = solve(arr, n, i+1, temp);
        }

        else{
            exc = solve(arr, n, i+1, temp);
        }

        return max(inc, exc);
    }

    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string temp = "";
        int i = 0;
        return solve(arr, n, i, temp);
    }
};