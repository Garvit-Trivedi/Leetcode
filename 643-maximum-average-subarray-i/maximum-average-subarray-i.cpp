class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int windowsum = 0;
        int maxsum = INT_MIN;
        for(int i=0;i<n;i++){
            windowsum+=nums[i];

            if(i>=k-1){
                maxsum = max(maxsum,windowsum);
                windowsum-=nums[i-k+1];
            }
        }
        return (double)maxsum/k;
        
    }
};