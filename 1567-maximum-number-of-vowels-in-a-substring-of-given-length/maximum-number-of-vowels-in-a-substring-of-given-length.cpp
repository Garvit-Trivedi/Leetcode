class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int c =0;
        int maxc=0;
        for(int i=0;i<k;i++){
 
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                c++;
            }
        }

        maxc = c;
        for(int i=k;i<n;i++){

            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                c--;
            }
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                c++;
          
            }
            maxc = max(maxc , c);
            
        }
        return maxc;
    }
};