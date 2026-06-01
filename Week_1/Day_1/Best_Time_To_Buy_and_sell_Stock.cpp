class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit= INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minProfit){
                minProfit=prices[i];
            }
            else{
                int profit=prices[i]-minProfit;
                maxProfit=max(profit,maxProfit);
            }
        }
        return maxProfit;
    }
};
