class Solution {
public:
    bool isPalindrome(string s) {

string ans ="";
for(char c:s){
    if(isalnum(c)){
        ans +=tolower(c);
    }
}

int n = ans.size();
int l =0;
int r = n-1;
while(l<r){
    if(ans[l]!=ans[r]){
        return false;
    }
    l++;
    r--;
}
return true;
    }
};