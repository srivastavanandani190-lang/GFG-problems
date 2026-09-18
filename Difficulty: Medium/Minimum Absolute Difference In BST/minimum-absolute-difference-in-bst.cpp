/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 
*/

class Solution {
private:
    int min_diff;
    int prev_val;

    void inorder(Node* node) {
        if (node == nullptr) return;

        // Traverse the left subtree
        inorder(node->left);

        // Calculate the difference with the previous node in the inorder traversal
        if (prev_val != -1) {
            min_diff = std::min(min_diff, node->data - prev_val);
        }

        // Update previous node value to current
        prev_val = node->data;

        // Traverse the right subtree
        inorder(node->right);
    }

public:
    int absDiff(Node *root) {
        // Reset state for every test case
        min_diff = INT_MAX;
        prev_val = -1;

        inorder(root);

        return min_diff;
    }
};