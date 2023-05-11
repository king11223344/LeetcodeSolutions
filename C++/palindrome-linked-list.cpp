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
    bool isPalindrome(ListNode* head) {
        ListNode *slowPtr=head,*fastPtr=head,*curr=head,*prev=NULL;
        while(fastPtr!=NULL && fastPtr->next!=NULL){
            fastPtr=fastPtr->next->next;
            slowPtr=slowPtr->next;
            curr->next=prev;
            prev=curr;
            curr=slowPtr;
        }
        ListNode *looper=fastPtr?slowPtr->next:slowPtr;
        // ListNode *temp=head;
        while(looper!=NULL){
            if(prev->val != looper->val){
                return false;
            }
            else{
                prev=prev->next;
                looper=looper->next;
            }
        }
        return true;
    }
};
