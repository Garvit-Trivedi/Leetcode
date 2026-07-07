class Solution {
public:
    long long sumAndMultiply(int n) {
        int rev = 0;
        int temp = n;

       
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        long long x = 0;
        int sum = 0;

      
        while (rev > 0) {
            int digit = rev % 10;
            if (digit != 0) {
                x = x * 10 + digit;
                sum += digit;
            }
            rev /= 10;
        }

        return x * sum;
    }
};