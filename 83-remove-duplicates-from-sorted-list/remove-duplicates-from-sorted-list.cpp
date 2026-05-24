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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        if(temp == NULL || temp -> next == NULL){
            return head;
        }
        while(temp  != NULL && temp -> next != NULL){
            ListNode * Nextnode = temp -> next;
            if(Nextnode -> val != temp -> val){
                temp = temp -> next;
            }
            else{
                temp->next = Nextnode->next;
                delete Nextnode;
            }
        }
        return head;
    }
};
