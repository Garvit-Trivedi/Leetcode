class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        // vector<int> ans;
int ans=0;
        for(int i=n-1;i>=2;i--){
            if(nums[i]<nums[i-1]+nums[i-2]){
                ans+=nums[i] + nums[i-1] + nums[i-2];
                break;
            }
        }
        return ans;
    }
    

};