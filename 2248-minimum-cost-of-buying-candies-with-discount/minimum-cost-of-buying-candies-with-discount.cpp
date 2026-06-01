class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.rbegin(),cost.rend());
        int sum=0;
        int count=0;
        for(int i=0;i<cost.size();i++){
            if(count !=2){
                sum+=cost[i];
                count++;
            }else{
                count = 0;
            }
        }
        return sum;
    }
};