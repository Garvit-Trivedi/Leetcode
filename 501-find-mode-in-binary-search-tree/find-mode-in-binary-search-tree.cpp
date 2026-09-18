/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void store(TreeNode* root , vector<int>& ans){
 if(root == nullptr) return;
 store(root->left,ans);
 ans.push_back(root->val);
 store(root->right, ans);
}
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        store(root , ans);

        unordered_map<int,int> mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        vector<int> res;
   int maxf=0;
   for( auto [value,freq]:mp){
    maxf = max(maxf,freq);
   }
  
  for(auto [value, freq] : mp){
    if(freq == maxf){
        res.push_back(value);
    }
  }
return res;

    }
};