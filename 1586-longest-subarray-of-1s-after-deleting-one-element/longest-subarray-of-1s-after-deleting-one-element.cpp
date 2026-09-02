class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int l=0;
    int r =0;
    int z =0;
    int ans=0;

    for(int i =0;i<nums.size();i++){
        if(nums[i]==0){
            z++;
        }
        while(z>1){
            if(nums[l]==0){
                z--;
            }
                            l++;

        }

        ans= max(ans,i-l);
    }

    return ans;
        
    }
};