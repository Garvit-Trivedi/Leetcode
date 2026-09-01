class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i] == 0){
          sum+=customers[i];
            }
        }

        int window =0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i] == 1){
                window+=customers[i];
            }
        }

        int maxsum = window;

        for(int i= minutes;i<n;i++){
            if(grumpy[i-minutes] == 1){
                window-=customers[i-minutes];
            }

            if(grumpy[i] == 1){
                window+=customers[i];
            }

            maxsum = max(window,maxsum);
        }

        return sum + maxsum;
    }
};