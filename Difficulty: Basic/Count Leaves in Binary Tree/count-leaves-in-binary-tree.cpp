/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
  void totalleaf(Node*root ,int &count){
      if(root==NULL){
          return ;
      }
      if(!root->left && !root->right){
      count++;
      return;
      }
      totalleaf(root->left,count);
      totalleaf(root->right,count);
   
  }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
             int count=0;
        totalleaf(root,count);
        return  count;
    }
};