class Solution {
  public:
      int countNodes(Node* root) {
        if (!root)
            return 0;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    bool isCBT(Node* root, int index, int total) {
        if (!root)
            return true;

        if (index >= total)
            return false;

        return isCBT(root->left, 2 * index + 1, total) &&
               isCBT(root->right, 2 * index + 2, total);
    }
    bool isCompleteBT(Node* root) {
        // code here
         int total = countNodes(root);
        return isCBT(root, 0, total);
        
    }
};