class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL) return head;

        Node* curr = head;

        while(curr != NULL && curr->next != NULL) {
            if(curr->data == curr->next->data) {
                // duplicate found → remove next node
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;  // free memory (optional in some platforms)
            } else {
                curr = curr->next; // move forward
            }
        }

        return head;
    }
};