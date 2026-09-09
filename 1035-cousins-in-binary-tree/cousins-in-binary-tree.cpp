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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == nullptr) return 0;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();

            bool fx = false;
            bool fy = false;

            for(int i = 0;i<n;i++){
                TreeNode * curr = q.front();
                q.pop();

                if(curr-> right && curr->left){
                    if((curr->left->val == x && curr->right->val == y) || (curr->right->val == x && curr->left->val == y))
                    return false;
                }


                if(curr->val == x){
                    fx = true;
                }

                if(curr->val == y){
                    fy = true;
                }

                if(curr->left){
                    q.push(curr->left);
                }

                if(curr->right){
                    q.push(curr->right);
                }
            }

            if(fx && fy){
                return true;
            }

            if(fx || fy){
                return false;
            }
        }
        return false;
    }
};