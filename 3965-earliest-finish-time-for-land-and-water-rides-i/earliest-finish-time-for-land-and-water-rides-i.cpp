class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            int lfin = landStartTime[i] + landDuration[i];
            for(int j = 0; j < m;j++){
                int f1 = max(lfin,waterStartTime[j]) + waterDuration[j];

                int wfin = waterStartTime[j]+ waterDuration[j];
                int f2 = max(wfin, landStartTime[i]) + landDuration[i];

                ans = min(ans,min(f1,f2));
            }

            
        }
return ans;
    }
};