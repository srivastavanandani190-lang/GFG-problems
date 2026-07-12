/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void Preorder(Node* root,vector<int>&ans){
      if(root==NULL){
          return;
      }
      ans.push_back(root->data);
      Preorder(root->left,ans);
      Preorder(root->right,ans);
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        Preorder(root,ans);
        return ans;
        
    }
};