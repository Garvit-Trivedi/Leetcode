class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long  total = 0;

        for (long long x = num1; x <= num2; x++) {
            string s = to_string(x);

            for (int i = 1; i < s.size() - 1; i++) {
                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                    total++;
                }
            }
        }

        return (int)total;
    }
};