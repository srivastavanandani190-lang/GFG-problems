class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* fast = head;
        Node* slow = head;

        // Move fast pointer k steps ahead
        for(int i = 0; i < k; i++) {
            if(fast == NULL) return -1; // k > length
            fast = fast->next;
        }

        // Move both pointers
        while(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
};