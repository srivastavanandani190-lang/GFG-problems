/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  private:
    // Helper function to check if two subtrees are mirrors of each other
    bool isMirror(Node* leftSub, Node* rightSub) {
        // If both nodes are null, they are symmetric
        if (leftSub == nullptr && rightSub == nullptr) {
            return true;
        }

        // If only one of the nodes is null, they are not symmetric
        if (leftSub == nullptr || rightSub == nullptr) {
            return false;
        }

        // Check if current data matches, and recursively check the children
        // The left child of the left subtree must match the right child of the right subtree
        // The right child of the left subtree must match the left child of the right subtree
        return (leftSub->data == rightSub->data) &&
               isMirror(leftSub->left, rightSub->right) &&
               isMirror(leftSub->right, rightSub->left);
    }

  public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(Node* root) {
        // An empty tree is symmetric
        if (root == nullptr) {
            return true;
        }

        // Check if the left and right subtrees of the root are mirrors
        return isMirror(root->left, root->right);
    }
};