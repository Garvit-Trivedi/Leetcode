class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> mp;
     mp[0] = 1;

int pre = 0;
int c=0;
for(int i=0;i<nums.size();i++){
     pre+=nums[i];

     if(mp.find(pre -k)!=mp.end()){
        c+=mp[pre - k];
}
mp[pre]++;

}
return c;
        
    }
};