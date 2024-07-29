class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int profit = 0;
      int i = 0;
      int len = prices.size();
      while( i < len - 1)
       {
         if (prices[i]<prices[i+1]) 
         {
           profit += prices[i+1] - prices[i];
         }
         i += 1;
      }
      return profit;
    }
};
