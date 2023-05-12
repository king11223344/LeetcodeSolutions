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
    ListNode* partition(ListNode* head, int x) {
        ListNode *sHead=new ListNode(-1),*bHead= new ListNode(-1);
        ListNode *small=sHead,*big=bHead;
        while(head){
            if(head->val<x){
                sHead->next=head;
                sHead=head;
                head=head->next;
                sHead->next=NULL;
            }
            else{
                bHead->next=head;
                bHead=head;
                head=head->next;
                bHead->next=NULL;
            }
            
        }
        sHead->next=big->next;
        return small->next;
    }
};
