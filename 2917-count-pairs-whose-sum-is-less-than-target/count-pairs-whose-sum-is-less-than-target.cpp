class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

int n = nums.size();
int l = 0;
int r = n-1;
int count = 0;
while(l<r){
    if(nums[l] + nums[r] < target){
        count += (r-l);
        l++;
    }else{
        r--;
    }

}
return count;
    }
};