class Solution {
public:
    int thirdMax(vector<int>& nums) {
     long max1 = LONG_MIN;
      long max2 = LONG_MIN;
       long max3 = LONG_MIN;

       for(int arr : nums){
        if(arr == max1 || arr == max2 || arr == max3 )
            continue;
        
        if(arr>max1){
            max3 = max2;
            max2 = max1;
            max1 = arr;
        } 
       else if(arr > max2){
            max3 = max2;
            max2 = arr;
        }
      else  if(arr>max3){
            max3= arr;
        }
       }
       return max3 == LONG_MIN?max1 : max3;
    }
};