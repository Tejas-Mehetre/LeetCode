class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        
        while(numBottles >= numExchange){
            total += numBottles / numExchange;
            int rem = numBottles % numExchange;
            numBottles = (numBottles / numExchange) + rem;
        }

        return total;
    }
};