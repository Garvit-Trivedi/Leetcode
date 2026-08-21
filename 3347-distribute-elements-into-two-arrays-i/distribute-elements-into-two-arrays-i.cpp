class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int n = 0;
        int m = 0;

        for(int i=2;i<nums.size();i++){
            if(arr1[n] > arr2[m]){
                arr1.push_back(nums[i]);
           n++;
            }

            else if(arr1[n] < arr2[m]){
                arr2.push_back(nums[i]);
           m++;
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};