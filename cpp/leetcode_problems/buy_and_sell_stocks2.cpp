class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int min = prices[0];
        int selling = 0;
        int maxprofit = 0;
        for (i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                
            }
            
            else
            {
               int profit = prices[i] - min;

                if(profit>maxprofit)
                {
                    maxprofit = profit;
                }
            }
        }
        return maxprofit;
        
    }
};