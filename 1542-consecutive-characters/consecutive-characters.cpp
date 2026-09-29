class Solution {
public:
    int maxPower(string s) {
        int len = 1, maxLen = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == s[i + 1]) len++;
            else len = 1;
            maxLen = max(maxLen,len);
        }
        return maxLen;
    }
};