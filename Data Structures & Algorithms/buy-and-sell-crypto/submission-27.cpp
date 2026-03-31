class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0];
        int best_profit = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < low) {
                low = prices[i];
            }
            if((prices[i] - low) > best_profit) {
                best_profit = prices[i] - low;
            }
        }
        return best_profit;
    }
};
