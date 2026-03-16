class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        long long sum = 0;
        long long maxsum=0;
        unordered_map<int,int> mp;
        for(int end =0;end<n;end++){
 sum+=nums[end];
 mp[nums[end]]++;

 if(end-start+1>k){
    sum-=nums[start];
    mp[nums[start]]--;

    if(mp[nums[start]] == 0){
        mp.erase(nums[start]);
        // start++;
    }
    start++;
 }
   if(end-start+1 == k && mp.size() == k){
            maxsum = max(maxsum, sum);
        }
        }
      

        return maxsum;

    }
};