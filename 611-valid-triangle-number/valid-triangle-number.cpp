class Solution {
public:
    int triangleNumber(vector<int>& nums) {
   int n = nums.size();
   int c =0;
   sort(nums.begin(),nums.end());
   for(int r = n-1;r>=2;r--){
    int l=0;
    int m = r-1;
    while(m>l){
        if(nums[l] + nums[m] > nums[r]){
             c += m - l;
            m--;
        }else{
            l++;
        }
    }
   }  
   return c;
    }
};