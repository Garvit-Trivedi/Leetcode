class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
     vector<int> pos;
     for(int i=0;i<n;i++){
       if(s[i] == c){
        pos.push_back(i);
       }
     }
     vector<int> res(n);
     int j=0;
     for(int i=0;i<n;i++){
        while(j<pos.size()-1 && abs(pos[j+1]-i) <= abs(pos[j]-i)){
            j++;
        }
        res[i] = abs(pos[j]-i);
     }
     return res;
    }
};