class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                char Top = st.top();
                st.pop();
                if(c == ')' && Top !='(')return false;
                   if(c == '}' && Top !='{')return false;
                if(c == ']' && Top !='[')return false;
             
            }
        }
        return st.empty();
       
    }
   
};