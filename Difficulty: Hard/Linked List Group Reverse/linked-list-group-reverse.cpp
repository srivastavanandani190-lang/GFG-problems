/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    // Function to reverse k nodes
    Node* reverseKGroup(Node *head, int k) {
        if(head == NULL || k == 1)
            return head;

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        int count = 0;

        // Reverse first k nodes
        while(curr != NULL && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // Recursively reverse remaining list
        if(next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        // prev becomes new head
        return prev;
    }
};