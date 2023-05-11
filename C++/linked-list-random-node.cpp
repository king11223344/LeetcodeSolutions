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


using namespace std;
class Solution {
public:
    vector<int> nodes;
    Solution(ListNode* head) {
        for(ListNode* temp=head;temp!=NULL;temp=temp->next){
            nodes.push_back(temp->val);
        }
    }
    
    int getRandom() {
        return nodes[rand()%nodes.size()];
    }
};
