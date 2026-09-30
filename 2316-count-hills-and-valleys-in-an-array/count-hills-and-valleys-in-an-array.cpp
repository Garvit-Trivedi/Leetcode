class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c =0;
        int l = 0;
        int n = nums.size();

        for(int i = 0; i< n-1;i++){
if(nums[i] != nums[i+1]){
    if((nums[i] > nums[l] && nums[i] > nums[i+1]) || (nums[i] < nums[l] && nums[i] < nums[i+1])){
        c++;
    }
    l = i;
}
        }
        return c;
    }
};