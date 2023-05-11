/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode * p=head,*q=head;
        while(p!=NULL && q!=NULL){
            p=p->next;
            if(q->next==NULL) return false;
            q=q->next->next;
            if(p==NULL || q==NULL) return false;
            if(p==q) return true;
        }
        return false;
    }
};