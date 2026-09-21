/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
int countNode(ListNode* head){
    int c =0;
    while(head !=0){
        c++;
        head = head->next;
    }
    return c;
}

TreeNode* convert(ListNode* &head , int n){
    if(n<=0){
        return nullptr;
    }

    TreeNode* leftsub =  convert(head, n/2);
    TreeNode* root = new TreeNode(head -> val);
    root->left = leftsub;

    head = head->next;

    root -> right = convert(head , n - n/2 - 1);

    return root;
}
    TreeNode* sortedListToBST(ListNode* head) {
        int totalNode = countNode(head);
        return convert(head , totalNode);
    }
};