class Solution {
public:
    int passThePillow(int n, int time) {
        int i = time % (n-1);
        int rep = (time - i) / (n-1);
        if(rep % 2 == 0){
            return 1+i;
        }
        return n - i;
    }
};