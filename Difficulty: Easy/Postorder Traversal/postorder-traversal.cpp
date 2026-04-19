/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        if(root == NULL){
            return {};
        }

        vector<int> left = postOrder(root->left);
        vector<int> right = postOrder(root->right);

        left.insert(left.end(), right.begin(), right.end());
        left.push_back(root->data);

        return left;
    }
};