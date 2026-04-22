class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Base case
        if (root == NULL) return false;

        // If it's a leaf node
        if (root->left == NULL && root->right == NULL) {
            return (target == root->data);
        }

        // Recur for left and right subtrees
        int remaining = target - root->data;

        return hasPathSum(root->left, remaining) || 
               hasPathSum(root->right, remaining);
    }
};