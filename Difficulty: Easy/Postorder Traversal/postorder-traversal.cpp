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
   void Postorder(Node* root,vector<int>&ans){
      if(root==NULL){
          return;
      }
    
      Postorder(root->left,ans);
      Postorder(root->right,ans);
        ans.push_back(root->data);
       
   }
  
    vector<int> postOrder(Node* root) {
       // code here
        vector<int>ans;
        Postorder(root,ans);
        return ans;
    }
};