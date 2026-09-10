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
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans =0;
        while(!q.empty()){
             TreeNode* curr = q.front();
             q.pop();
               long long sum = 0;
               int c =0;
               queue<TreeNode*> subtree;
               subtree.push(curr);
               while(!subtree.empty()){
                TreeNode* node = subtree.front();
                subtree.pop();
                sum += node->val;
                c++;
                if(node->left) subtree.push(node->left);
                if(node->right) subtree.push(node->right);
               }
               int avg = (double)sum/c;
               if(avg == curr->val) ans++;
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
        }
        return ans;
    }
};