class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int product = 1;
        while(m>0){
            int digit = m%10;
             sum = sum + digit;
             product= product * digit;
            m = m/10;
        }

        int ans = sum + product;
        if(n % ans == 0){
            return true;
        }
        return false;
    }
};