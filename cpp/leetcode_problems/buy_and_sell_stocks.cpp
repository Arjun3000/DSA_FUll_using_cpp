class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int min = prices[0];
        int selling = 0;
        for (i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                selling = i;
            }
        }
        int max = min;

        for (i = selling + 1; i < prices.size(); i++) {
            if (prices[i] > max) {
                max = prices[i];
            }
        }
        int profit = max - min;
        if (profit > 0) {
            return profit;
        } else {
            return 0;
        }
    }
};