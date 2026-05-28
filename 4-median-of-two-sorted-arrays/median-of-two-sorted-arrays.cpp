class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> merged(n1 + n2);

        std::merge(nums1.begin(), nums1.end(),
                   nums2.begin(), nums2.end(),
                   merged.begin());

        int n = merged.size();

        if (n % 2 == 0) {
            return (merged[n/2 - 1] + merged[n/2]) / 2.0;
        } 
        else {
            return merged[n/2];
        }
    }
};
