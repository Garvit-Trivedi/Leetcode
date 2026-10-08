class Solution {
public:
    string removeOuterParentheses(string s) {
        int c = 0;
        int n = s.size();
        string str = "";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(c >0){
                    str+=s[i];
                }
                c++;
            }else{
                c--;
                if(c>0){
                    str+=s[i];
                }
            }
        }
        return str;
    }
};