/* LinkedList Node structure
c;ass Node {
  public:
    bool data;   // data is either 0 or 1
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int decimalValue(Node* head) {
        long long MOD = 1000000007;
        long long ans = 0;
        
        while (head != nullptr) {
            ans = (ans * 2 + head->data) % MOD;
            head = head->next;
        }
        
        return ans;
    }
};
