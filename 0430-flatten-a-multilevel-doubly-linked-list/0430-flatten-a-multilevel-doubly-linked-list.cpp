/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head;

        Node* curr = head;

        while(curr != NULL) {

            // if no child move ahead
            if(curr->child == NULL) {
                curr = curr->next;
            }
            else {

                // flatten child list first
                Node* childHead = flatten(curr->child);

                Node* nextNode = curr->next;

                // connect current with child
                curr->next = childHead;
                childHead->prev = curr;

                curr->child = NULL;

                // go to end of child list
                Node* temp = childHead;

                while(temp->next != NULL) {
                    temp = temp->next;
                }

                // connect tail with nextNode
                if(nextNode != NULL) {
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }

                curr = nextNode;
            }
        }

        return head;
    }
};