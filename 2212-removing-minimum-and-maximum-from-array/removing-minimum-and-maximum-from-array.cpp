class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        int maxn = INT_MIN;
        int maxndis = -1;
        int minndis = -1;
        for(int i=0;i<n;i++){
            if(minn>nums[i]){
                minn = nums[i];
                minndis = i;
            }

            if(maxn<nums[i]){
                maxn = nums[i];
                maxndis = i;
            }
            
        }
    
   int left = min(minndis,maxndis);
   int right = max(minndis,maxndis);
  int op1 = right +1;
  int op2 = n-left;
  int op3 = (left +1) + (n-right);

return min(op1, min(op2, op3));
    }
};