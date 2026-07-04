/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Comparator{
    public:
    bool operator()(Node*a,Node*b){
        return a->data > b->data;
    }
};
//min heap
class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        int n=arr.size();
         priority_queue<Node*,vector<Node*>, Comparator>p;
            for (Node* head : arr) {
            if (head)
                p.push(head);
        }
         
         Node *root=new Node(0);
         Node *tail=root;
         Node *temp;
         while(!p.empty()){
             temp=p.top();
             p.pop();
             tail->next=temp;
             tail=tail->next;
             if(temp->next){
                 p.push(temp->next);
             }
         }
         
         return root->next;
         
         
    }
};