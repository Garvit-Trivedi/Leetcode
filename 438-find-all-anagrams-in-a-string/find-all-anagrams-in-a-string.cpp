class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        vector<int> result;
        vector<int> pcount(26,0);
        vector<int> windowcount(26,0);
        for(char c: p){
            pcount[c-'a']++;
        }

        for(int i=0;i<n;i++){
            windowcount[s[i] - 'a']++;

            if(i>=k){
                windowcount[s[i-k]-'a']--;
            }
            if(pcount == windowcount){
                result.push_back(i-k+1);
            }

           
        }
         return result;
    }
};