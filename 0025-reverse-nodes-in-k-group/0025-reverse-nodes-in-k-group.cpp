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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
    ListNode* findknode(ListNode* temp, int k) {
        k -= 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevnode = NULL;

        while (temp != NULL) {
            ListNode* knode = findknode(temp, k);
            if (knode == NULL) {
                if (prevnode) {
                    prevnode->next = temp;
                }
                break;
            }
            ListNode* nextnode = knode->next;
            knode->next = NULL;
            reverse(temp);
            if (temp == head) { // 1st group
                head = knode;
            } else { // next groups
                prevnode->next = knode;
            }
            prevnode = temp;
            temp = nextnode;
        }
        return head;
    }
};