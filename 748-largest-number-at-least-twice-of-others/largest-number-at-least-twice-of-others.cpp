class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int l=INT_MIN;
        int ans = 0;
        int sl=INT_MIN;

        for(int i=0;i<n;i++){
            if(nums[i]>l){
        sl = l;
        l = nums[i];
        ans = i;
            }else if(nums[i] < l && nums[i] > sl){
                sl = nums[i];
            }
        }

        return (l >= 2*sl) ? ans:-1;
    }
};