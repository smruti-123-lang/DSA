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
    ListNode* findmiddle(ListNode* head){
        ListNode* fast = head -> next;
        ListNode* slow = head;
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    ListNode* merge2(ListNode* head1, ListNode* head2){
        ListNode* dummynode = new ListNode(-1);
        ListNode* temp = dummynode;

        while(head1 != NULL && head2 != NULL){
            if(head1 -> val > head2 -> val){
                temp -> next = head2;
                head2 = head2 -> next;
                temp = temp -> next;

            }
            else{
                temp -> next = head1;
                head1 = head1 -> next;
                temp = temp -> next;

            }
            if(head1) temp -> next = head1;
            else temp -> next = head2;
        }
      return dummynode -> next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* middle = findmiddle(head);
        ListNode* lefthead = head;
        ListNode* righthead = middle -> next;
        middle -> next = NULL;
        lefthead =sortList(lefthead);
        righthead =sortList(righthead);
        return merge2(lefthead,righthead);

    }
};