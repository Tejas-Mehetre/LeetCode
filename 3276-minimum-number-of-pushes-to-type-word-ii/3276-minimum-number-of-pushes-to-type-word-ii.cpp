class Solution {
public:
    int minimumPushes(string word) {
        vector<int> map(26, 0);
        for(char c : word){
            map[c - 'a']++;
        }

        sort(map.rbegin(), map.rend());

        int totalPresses = 0;
        for(int i = 0; i<26; i++){
            if(map[i] == 0) break;
            totalPresses += ((i / 8) + 1) * map[i];
        }
        return totalPresses;
    }
};