class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int i, j;
        int mini = prices[0];
        int profit = 0;
        for (i = 0; i < prices.size(); i++)
        {
            int cost = prices[i] - mini;
            mini = min(mini, prices[i]);
            profit = max(profit, cost);
        }
        return profit;
        // for(i=0; i<prices.size(); i++){
        //     for(j=i; j<prices.size(); j++){
        //         if(prices[j]>prices[i]){
        //             ma = max(ma,(prices[j]-prices[i]));
        //         }
        //     }
        // }
        // return ma;
    }
};