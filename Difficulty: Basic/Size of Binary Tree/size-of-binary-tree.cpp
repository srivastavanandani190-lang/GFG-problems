/* Node Structure
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
   int total(Node*root ,int &count){
      if(root==NULL){
          return 0;
      }
      count++;
      total(root->left,count);
      total(root->right,count);
      return count;
  }
    int getSize(Node* root) {
        // code here
        int count=0;
        int Count=total(root,count);
        return Count;
        
    }
};