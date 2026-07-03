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
    vector<int> inOrder(Node* root) {
        // code here
        if(root == NULL){
            return {};
        }

        vector<int> left = inOrder(root->left);
        vector<int> right = inOrder(root->right);
        
        vector<int> result;
          
        result.insert(result.end(), left.begin(), left.end());   // Left
        result.push_back(root->data); // Root
        result.insert(result.end(), right.begin(), right.end()); // Right
       
        
        return result;
    }
};