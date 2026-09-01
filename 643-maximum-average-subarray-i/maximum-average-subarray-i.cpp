class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int l=0;
       int window = 0;
       int maxsum=INT_MIN;
       for(int i=0;i<nums.size();i++){
        window+=nums[i];
        if(i-l+1 == k){
            maxsum = max(maxsum,window);
            window-=nums[l];
            l++;
        }
       }
       return (double)maxsum/k;
        
    }
};