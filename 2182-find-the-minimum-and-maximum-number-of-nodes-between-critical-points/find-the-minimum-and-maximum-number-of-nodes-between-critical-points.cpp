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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    if(head->next->next == NULL){
        return {-1,-1};
    }

int idx= 1;
int f = -1;
int l =-1;
  ListNode* prev = head;
  ListNode* curr = head->next;

int mindis = INT_MAX;
    while(curr->next != NULL){
  bool ismax = curr->val > prev->val && curr->val > curr->next->val;
  bool ismin = curr->val < prev->val && curr->val < curr->next->val;

  if(ismax || ismin){
     
      if(f == -1){
        f = idx;
      }
      if(l!=-1){
        mindis = min(mindis,idx - l);
      }
      l = idx;
  }
  prev = curr;
  curr = curr->next;
  idx++;

    }
    if(f == l){
        return {-1,-1};
    }
    int maxdis = l-f;
    return {mindis,maxdis};
    }
};