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
    int widthOfBinaryTree(TreeNode* root) {
        queue<TreeNode*> q;
        queue<unsigned long long> index;

        q.push(root);
        index.push(0);
         int maxwidth =0;

         while(!q.empty()){
            int n = q.size();
            unsigned long long f = index.front();
            unsigned long long e = f;

            for(int i=0;i<n;i++){
                TreeNode* curr = q.front();
                q.pop();

                unsigned  long long pos = index.front();
                index.pop();

                e = pos;

                if(curr->left){
                    q.push(curr->left);
                    index.push(2*pos + 1);
                }

                if(curr->right){
                    q.push(curr->right);
                    index.push(2*pos + 2);
                }
            }

            maxwidth = max(maxwidth , (int)(e-f+1));
         }
         return maxwidth;
    }
};