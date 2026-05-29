/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* insertcopynodes(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* copynode = new Node(temp->val);
            copynode->next = temp->next;
            temp->next = copynode;
            temp = copynode->next;
        }
        return head;
    }

    void connectRandomnodes(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* copynode = temp->next;

            if (temp->random) {
                copynode->random = temp->random->next;
            } else {
                copynode->random = NULL;
            }

            temp = temp->next->next;
        }
    }

    Node* extractOriginal(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;

        while (temp != NULL) {
            res->next = temp->next;
            res = res->next;

            temp->next = temp->next->next;
            temp = temp->next;
        }

        return dummy->next;
    }

    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        insertcopynodes(head);
        connectRandomnodes(head);
        return extractOriginal(head);
    }
};