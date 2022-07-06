class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int currprofit=0;
        int profit=0;
        int min = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            currprofit=prices[i]-min;
            cout<<" ";
            cout<<currprofit;
            if(currprofit>profit)
            {
                profit=currprofit;
            }
        }
        cout<<min;
        return profit;
        
    }
};
