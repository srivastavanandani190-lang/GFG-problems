/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
public:
    Node* buildTree(vector<int>& nodes) {
        if (nodes.size() == 0 || nodes[0] == -1)
            return NULL;

        Node* root = new Node(nodes[0]);
        queue<Node*> q;
        q.push(root);

        int i = 1;

        while (!q.empty() && i < nodes.size()) {
            Node* temp = q.front();
            q.pop();

            // Left child
            if (i < nodes.size() && nodes[i] != -1) {
                temp->left = new Node(nodes[i]);
                q.push(temp->left);
            }
            i++;

            // Right child
            if (i < nodes.size() && nodes[i] != -1) {
                temp->right = new Node(nodes[i]);
                q.push(temp->right);
            }
            i++;
        }

        return root;
    }
};