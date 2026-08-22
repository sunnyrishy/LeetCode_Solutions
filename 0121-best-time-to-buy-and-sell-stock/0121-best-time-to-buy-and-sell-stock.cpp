class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_value = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < n; i++){
            min_value = min(min_value, prices[i]);
            maxProfit = max(maxProfit, prices[i]-min_value);
        }        
        return maxProfit;
    }
};