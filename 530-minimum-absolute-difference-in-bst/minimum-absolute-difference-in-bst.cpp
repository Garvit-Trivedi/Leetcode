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
    int getMinimumDifference(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        
        vector<int> ans;

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            ans.push_back(curr->val);

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        sort(ans.begin(),ans.end());
        int res = INT_MAX;
        for(int i=1;i<ans.size();i++){
            res = min(res , ans[i] - ans[i-1]);
        }

        return res;
    }
};