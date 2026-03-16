class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n = s2.size();
       int k = s1.size();
       vector<int> s2count(26,0);
       vector<int> s1count(26,0);
       for(char c:s1){
        s1count[c-'a']++;
       } 

       for(int i=0;i<n;i++){
        s2count[s2[i] - 'a']++;

        if(i>=k){
            s2count[s2[i-k] - 'a']--;
        }
        if(s1count == s2count){
            return true;
        }
       }
       return false;
    }
};