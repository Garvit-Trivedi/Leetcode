class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int start = 0;

        int n = nums.size();

        for(int end = 0; end < n; end++) {
            if(end - start + 1 == k) {

                unordered_set<int> seen;

                for(int i = start; i <= end; i++) {
                    seen.insert(nums[i]);
                }

                for(int x : seen) {
                    freq[x]++;
                }

                start++;
            }
        }
        int ans = -1;

        for(auto [key, value] : freq){
            if(value == 1){
                ans = max(ans, key);
            }
        };

        return ans;
    }
};