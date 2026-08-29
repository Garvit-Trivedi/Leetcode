class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int b = prices[0];
    int p = 0;
    int n = prices.size();
    for(int i=1;i<n;i++ ){
        if(b>prices[i]){
            b = prices[i];
        }

        else if(prices[i]-b > p){
            p = prices[i]-b;
        }
    }
    return p;
    }
};