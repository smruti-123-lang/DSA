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
    ListNode* deleteMiddle(ListNode* head) {
        // Edge case: only one node
        if (head == NULL || head->next == NULL)
            return NULL;

        // Step 1: Count nodes
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        // Step 2: Find middle index
        int mid = count / 2;

        // Step 3: Traverse to node before middle
        temp = head;
        for (int i = 0; i < mid - 1; i++) {
            temp = temp->next;
        }

        // Step 4: Delete middle node
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};