class Solution {
public:
    int characterReplacement(string s, int k) {
       int n = s.size();
       int maxf=0;
       int maxl=0;
       int l=0;
       vector<int>f(26,0);
       for(int r =0;r<n;r++){
        f[s[r]-'A']++;
        maxf= max(maxf , f[s[r] - 'A']);
        int rep = (r-l+1) - maxf;

        while(rep > k){
            f[s[l] - 'A']--;
            l++;
            rep = (r-l+1) - maxf;
        }
        maxl = max(maxl,r-l+1);
       }

          
        
        return maxl;
    }
};