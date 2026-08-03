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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     if(!head || left  == right) return head;

ListNode * curr = head;
     vector<int> vals;
     int pos = 1;
     while(curr){
        if(pos>=left && pos <=right){
            vals.push_back(curr->val);
        }
        curr= curr->next;
        pos++;
     }
    reverse(vals.begin() , vals.end());
     curr = head;
     pos = 1;
     int index =0;
     while(curr){
        if(pos>=left && pos<=right){
            curr->val = vals[index];
            index++;
        }
        // index++;
        curr = curr->next;
        pos++;
     }
return head;
    }
};