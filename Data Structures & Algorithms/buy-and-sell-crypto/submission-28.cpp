class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_profit = 0;
        int low = prices[0];
        int low_index = 0;
        int high = 0;
        int high_index = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < low && i != (prices.size() - 1)) {
                low = prices[i];
                low_index = i;
            }
            if(low_index > high_index) {
                high = 0;
            }
            if(prices[i] > high && i > low_index) {
                high = prices[i];
                high_index = i;
            }
            if(high - low > best_profit) {
                best_profit = high - low;
            }
        }

        return best_profit;
    }
};
