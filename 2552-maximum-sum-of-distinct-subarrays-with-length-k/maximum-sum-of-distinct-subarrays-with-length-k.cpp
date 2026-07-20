class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      int n= nums.size();
      unordered_map<int,int> freq;
      long long sum =0;
      long long maxsum = 0;
      int s = 0;
      for(int i=0;i<n;i++){
        sum+=nums[i];
        freq[nums[i]]++;

        if(i-s+1 >k){
            sum-=nums[s];
                freq[nums[s]]--;
                if(freq[nums[s]] == 0){
                    freq.erase(nums[s]);
                }
                s++;
        }
        
if(i - s + 1 == k && freq.size() == k){
    maxsum = max(maxsum, sum);
}

      }
      return maxsum;

    }
};