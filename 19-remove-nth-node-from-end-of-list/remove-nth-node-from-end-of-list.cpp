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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int len=0;
        while(temp){
            len++;
            temp =temp->next;
        }
        if( n==len){
            ListNode *newhead = head->next;
            delete head;
            return newhead;
        }
        temp = head;
        for(int i=1;i<len-n;i++){
            temp = temp->next;
        }
        ListNode *curr = temp->next;
        temp->next = temp->next->next;
        delete curr;
        return head;
    }
};
