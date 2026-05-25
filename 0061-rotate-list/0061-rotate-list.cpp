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
    ListNode* findnode(ListNode* head){
        ListNode* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        int len = 1;
        ListNode* temp = head;

        // find length
        while(temp->next != NULL){
            len++;
            temp = temp->next;
        }

        k = k % len;

        if(k == 0) return head;

        temp = head;

        // move to (len-k-1)th node
        for(int i = 1; i < len-k; i++){
            temp = temp->next;
        }

        ListNode* lastnode = findnode(head);

        // make circular
        lastnode->next = head;

        // new head
        head = temp->next;

        // break link
        temp->next = NULL;

        return head;
    }
};