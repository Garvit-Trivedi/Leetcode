class Solution {
public:
    int digitsum(int num) {
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;
            num = num / 10;
            sum += digit;
        }

        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i == digitsum(nums[i])) {
                return i;
            }
        }

        return -1;
    }
};