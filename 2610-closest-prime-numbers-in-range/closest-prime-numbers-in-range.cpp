class Solution {
public:
    bool isprime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> prime;

        for (int i = left; i <= right; i++) {
            if (isprime(i)) {
                prime.push_back(i);
            }
        }
        if (prime.size() < 2)
            return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> ans = {-1, -1};
        for (int i = 0; i < prime.size() - 1; i++) {
            int diff = prime[i + 1] - prime[i];

            if (diff < minDiff) {
                minDiff = diff;
                ans = {prime[i], prime[i + 1]};
            }
        }

        return ans;
    }
};