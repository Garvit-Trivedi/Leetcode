class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
  int cmax = nums[0];
  int cmin = nums[0];
  int ans = nums[0];
  for(int i=1;i<n;i++){
    int num = nums[i];
    if(num <0){
        swap(cmax,cmin);
    }

    cmax = max(num,cmax*num);
    cmin = min(num,cmin*num);

    ans =  max(ans,cmax);
  }
  return ans;
    }
};