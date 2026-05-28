class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
     vector<int> ans;
     vector<int> pos;
     for(int i=0;i<n;i++){
        if(s[i] == c){
            pos.push_back(i);
        }
     }

     for(int i=0;i<n;i++){
        int mini = INT_MAX;
        for(int j=0;j<pos.size();j++){
            mini = min(mini,abs(i-pos[j]));
        }
        ans.push_back(mini);
     }
     return ans;
    }
};