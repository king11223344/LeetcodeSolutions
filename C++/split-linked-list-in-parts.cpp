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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *temp=head;
        vector<ListNode*> v;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int everyList=size/k;
        int extra=size % k;
        ListNode *headPtr=head,*prev=NULL;
        while(k--){
            v.push_back(headPtr);
            if(headPtr!=NULL){
                int add=extra-->0?1:0;
                int thisListNode=everyList+add;
                // ListNode *travel=headPtr;
                for(int i=0;i<thisListNode-1;i++){
                    headPtr=headPtr->next;
                }
                prev=headPtr;
                headPtr=headPtr->next;
                prev->next=NULL;

                
            }
        }
        return v;
    }
};
