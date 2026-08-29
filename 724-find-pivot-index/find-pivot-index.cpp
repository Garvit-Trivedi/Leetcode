class Solution {
public:
    int pivotIndex(vector<int>& nums) {
   int n = nums.size();
//    int sum=0;
   int t=0;
for(int n:nums){
    t+=n;
}

int ls = 0;
for(int i=0;i < n;i++){
    int rs = t - ls - nums[i];

    if(ls == rs){
        return i;
    }
    ls+=nums[i];
}
        return -1;
    }
};