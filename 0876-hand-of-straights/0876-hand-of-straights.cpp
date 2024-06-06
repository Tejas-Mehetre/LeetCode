class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        unordered_map<int,int> count;
        for(int num : hand){
            count[num]++;
        }
        sort(hand.begin(), hand.end());
        for(int num : hand){
            if(count[num] == 0) continue;
            for(int i = 0; i<groupSize; i++){
                if(count[num+i] == 0) return false;
                count[num + i]--;
            }
        }
        return true;
    }
};