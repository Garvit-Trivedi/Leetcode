class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        vector<int> equal;
        vector<int> big;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                equal.push_back(nums[i]);
            }
            else{
                big.push_back(nums[i]);
            }
        }

        vector<int> result;

        for(int i = 0; i < small.size(); i++){
            result.push_back(small[i]);
        }

        for(int i = 0; i < equal.size(); i++){
            result.push_back(equal[i]);
        }

        for(int i = 0; i < big.size(); i++){
            result.push_back(big[i]);
        }

        return result;
    }
};