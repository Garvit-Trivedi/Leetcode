class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int> s1;
    unordered_map<char,int> t1;
      if (s.size() != t.size())
            return false;
     for(char ss:s){
        s1[ss]++;
     }

     for(char tt:t){
        t1[tt]++;
     }

     for(char c : s){
        if(s1[c] != t1[c])
        return false;
     }
     return true;
    }
};