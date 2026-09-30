class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = 1, buy = prices[0];
        int maxProfit = 0;
        while(j < size(prices)){
            int sell = prices[j];
            int profit = sell - buy;
            if(profit >= maxProfit) {
                maxProfit = profit;
            }
            if(buy >= sell){
                j++;
                buy = sell;
            }
            else if(buy < sell){
                ++j;
            }
        }
        return maxProfit;
        
    }
};
