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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *firstL=list1,*secondL=list2,*head;
        head=new ListNode(-1);
        ListNode *temp=head;
        while(firstL || secondL){
            if(firstL==NULL){
                temp->next=secondL;
                break;
            }
            if(secondL==NULL){
                temp->next=firstL;
                break;
            }
            if(firstL->val<secondL->val){
                temp->next=firstL;
                firstL=firstL->next;
                temp=temp->next;
                temp->next=NULL;
            }
            else{
                temp->next=secondL;
                secondL=secondL->next;
                temp=temp->next;
                temp->next=NULL;
            }
        }
        return head->next;

        
    }
};
