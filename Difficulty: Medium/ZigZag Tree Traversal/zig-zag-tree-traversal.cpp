/*
Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {

        if (root == NULL)
            return {};

        stack<Node*> s1;   // Left -> Right
        stack<Node*> s2;   // Right -> Left

        vector<int> ans;

        s1.push(root);

        while (!s1.empty() || !s2.empty()) {

            // Left -> Right
            while (!s1.empty()) {
                Node* temp = s1.top();
                s1.pop();

                ans.push_back(temp->data);

                if (temp->left)
                    s2.push(temp->left);

                if (temp->right)
                    s2.push(temp->right);
            }

            // Right -> Left
            while (!s2.empty()) {
                Node* temp = s2.top();
                s2.pop();

                ans.push_back(temp->data);

                if (temp->right)
                    s1.push(temp->right);

                if (temp->left)
                    s1.push(temp->left);
            }
        }

        return ans;
    }
};