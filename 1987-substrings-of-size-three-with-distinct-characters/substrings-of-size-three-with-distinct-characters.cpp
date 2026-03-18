class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int count = 0;
     vector<int> window(26,0);
     for(int i=0;i<n;i++){
        window[s[i] - 'a']++;
        if(i>=3){
            window[s[i-3] - 'a']--;
        }
        if(i>=2){
            int distinct=0;
            for(int j=0;j<26;j++){
                if(window[j]>0)distinct++;
            }
            if(distinct == 3)count++;
        }
     }
     return count;
    }
};