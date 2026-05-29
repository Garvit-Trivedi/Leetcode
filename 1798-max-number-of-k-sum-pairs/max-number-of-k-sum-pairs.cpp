class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int op=0;
        int n = nums.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum = nums[l] + nums[r];
            if(sum == k){
                l++;
                r--;
                op++;
            }else if(sum > k){
                r--;
            }else if(sum< k){
                l++;
            }
        }
        return op;
    }
};