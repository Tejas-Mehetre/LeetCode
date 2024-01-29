class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int low = 0, high = n-1 , mid;
        char ans = ' ';
        while(low <= high){
            mid = (low+high) / 2;
            if(letters[mid] > target){
                ans = letters[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(ans != ' '){
            return ans;
        }
        else{
            return letters[0];
        }
    }
};