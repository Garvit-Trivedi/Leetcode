class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start = 0;
        int sum=0;
        int maxsum=nums[0];
        for(int end=0;end<nums.size();end++){
            sum+=nums[end];

            maxsum = max(maxsum,sum);
   if(sum<0){
         sum = 0;   
        }
            
        }        
        return maxsum;
    }
};