class Solution {
public:

    int count(Node *root){
        if(root == NULL)
            return 0;

        return 1 + count(root->left) + count(root->right);
    }

    bool CBT(Node *root, int index, int total){
        if(root == NULL)
            return true;

        if(index >= total)
            return false;

        return CBT(root->left, 2*index+1, total) &&
               CBT(root->right, 2*index+2, total);
    }

    bool Maxheap(Node *root){

        if(root == NULL)
            return true;

        if(root->left && root->data < root->left->data)
            return false;

        if(root->right && root->data < root->right->data)
            return false;

        return Maxheap(root->left) &&
               Maxheap(root->right);
    }

    bool isHeap(Node* tree) {

        int total = count(tree);

        return CBT(tree, 0, total) &&
               Maxheap(tree);
    }
};