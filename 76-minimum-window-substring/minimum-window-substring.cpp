class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> seen;
        for(char c:t){
            seen[c]++;
        }

        int l=0;
        int n = seen.size();
        int h=0;
        int start =0;
        
        int minlen = INT_MAX;
        unordered_map<char,int> window;
        for(int r=0;r<s.size();r++){
            char c = s[r];
            window[c]++;
            if(seen.count(c) && window[c] == seen[c]){
                h++;
            }

            while(h == n){
                if(r-l+1<minlen){
                    minlen = r-l+1;
                    start = l;
                }
                char c = s[l];
                window[c]--;

                if(seen.count(c) && window[c] < seen[c]){
                    h--;
                }
                l++;
            }
        }
        if(minlen == INT_MAX) return "";

        return s.substr(start,minlen);
    }
};