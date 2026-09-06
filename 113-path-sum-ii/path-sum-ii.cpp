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
 void sum(TreeNode* root , int target ,vector<vector<int>>& ans, vector<int>& route ){
    if(root == nullptr) return;
    route.push_back(root->val);

    if(root->left == NULL && root->right == NULL){
        if(target == root->val){
            ans.push_back(route);
        }
    }

    sum(root->left,target-root->val,ans, route);
     sum(root->right,target-root->val,ans, route);
     route.pop_back();
 }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> route;
        sum(root, targetSum, ans, route);
        return ans;

    }
};