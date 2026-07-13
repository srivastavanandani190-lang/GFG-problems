/* Definition for Node class
Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int height(Node* root) {
        // Base case: an empty subtree contributes -1 to the edge count
        if (root == NULL) {
            return -1;
        }
        
        // Count 1 edge for the current step plus the maximum depth of the subtrees
        return 1 + max(height(root->left), height(root->right));
    }
};