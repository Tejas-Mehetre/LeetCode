class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0; i<heights.size(); i++){
            for(int j = i; j<heights.size(); j++){
                if(heights[i]<heights[j]){
                    int temp = heights[i];
                    heights[i] = heights[j];
                    heights[j] = temp;

                    string str = names[i];
                    names[i] = names[j];
                    names[j] = str;
                }
            }
        }
        return names;
    }
};