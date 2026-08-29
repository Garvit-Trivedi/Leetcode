class Solution {
public:
    int thirdMax(vector<int>& nums) {
long long  f= LLONG_MIN;
long long s = LLONG_MIN;
long long t = LLONG_MIN;
for(int x : nums){
    if( x == f || x == s || x == t)
    continue;

    if(x>f){
        t=s;
        s=f;
        f=x;
    }

 else if(x>s){
        t = s;
        s = x;
    }

    else if(x>t){
        t = x;
    }

   
} 

if(t == LLONG_MIN){
return f;
}

return t;
}
};