/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  int sum(Node*root ,int &s){
      if(root==NULL){
          return 0;
      }
      s+=root->data;
      sum(root->left,s);
      sum(root->right,s);
      return s;
  }
    int sumBT(Node* root) {
        // code here
        int s=0;
        int SUM=sum(root,s);
        return SUM;
        
    }
};