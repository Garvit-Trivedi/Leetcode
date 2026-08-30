class Solution {
   static bool compare(const pair<int,int>& a, const pair<int ,int>& b){

        if(a.second!=b.second){
            return a.second>b.second;
        }
        return a.first < b.first;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> s;
        for(int num : nums){
            s[num]++;
        }

        vector<pair<int,int>> sortfreq(s.begin(),s.end());
        sort(sortfreq.begin(),sortfreq.end(),compare);
vector<int> ans;
        for(int i=0;i<k;i++){
          ans.push_back(sortfreq[i].first);
        }
        return ans;
    }
};