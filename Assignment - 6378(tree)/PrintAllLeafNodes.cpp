// Given a Binary Tree Print all the leaf nodes.

// Input Format
// Level order input of the binary tree

// Constraints
// Total no of nodes <1000

// Output Format
// All leaf nodes from left to right in single line

// Sample Input
// 1
// 2 3
// 4 5
// 6 7
// -1 -1
// -1 -1
// -1 -1
// -1 -1
// Sample Output
// 4 5 6 7

#include <bits/stdc++.h>
using namespace std;

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

// Function to build the tree from level order input
Node* buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }

    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftData, rightData;
        cin >> leftData;
        if (leftData != -1) {
            current->left = new Node(leftData);
            q.push(current->left);
        }

        cin >> rightData;
        if (rightData != -1) {
            current->right = new Node(rightData);
            q.push(current->right);
        }
    }

    return root;
}

// Function to print leaf nodes
void printLeafNodes(Node* root) {
    if (!root) return;

    if (root->left == NULL && root->right == NULL) {
        cout << root->data << " ";
    }

    // Recursively visit left and right subtrees
    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int main() {
    Node* root = buildTree();
    printLeafNodes(root);

    return 0;
}
