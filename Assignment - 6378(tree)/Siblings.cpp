// Given a binary tree print all nodes that don’t have a sibling

// Input Format
// Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

// Constraints
// None

// Output Format
// Display all the nodes which do not have a sibling in a space separated manner

// Sample Input
// 50 true 12 true 18 false false false false
// Sample Output
// 12 18

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

// Function to build the tree from "true"/"false" input
Node* buildTree(string s) {
    if (s == "true") {
        int d;
        cin >> d;
        Node* root = new Node(d);

        string leftChild, rightChild;
        cin >> leftChild;
        root->left = buildTree(leftChild);

        cin >> rightChild;
        root->right = buildTree(rightChild);

        return root;
    }
    return NULL;
}

// Function to collect nodes without siblings
vector<int> printNodesWithoutSiblings(Node* root) {
    vector<int> ans;
    if (!root) return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        // Check left child
        if (current->left != NULL && current->right == NULL) {
            ans.push_back(current->left->data);
        }
		// check rigth child
        if (current->left == NULL && current->right != NULL) {
            ans.push_back(current->right->data);
        }

        // Enqueue children
        if (current->left != NULL) {
            q.push(current->left);
        }
        if (current->right != NULL) {
            q.push(current->right);
        }
    }

    return ans;
}

int main() {
    Node* root = buildTree("true");

    vector<int> ans = printNodesWithoutSiblings(root);

    for (int i =0 ;i<ans.size() ; i++) {
        cout << ans[i] << " ";
    }
    cout << endl; 

    return 0;
}
