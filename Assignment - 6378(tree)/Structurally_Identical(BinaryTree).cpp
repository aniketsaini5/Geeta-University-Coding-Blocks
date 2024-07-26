// Given two trees check if they are structurally identically. Structurally identical trees are trees that have same structure. They may or may not have the same data though.

// Input Format
// Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

// Constraints
// 1 <= N <= 10^4

// Output Format
// Display the Boolean result

// Sample Input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// Sample Output
// true
// Explanation
// The given two trees have the exact same structure and hence we print true.
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string data;
    Node* left;
    Node* right;

    Node(string val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTreePreOrder() {
    string val;
    cin >> val;

    if (val == "false") return NULL;

    Node* root = new Node(val);

    string leftNode, rightNode;
    cin >> leftNode;
    if (leftNode == "true") {
        root->left = BuildTreePreOrder();
    } else {
        root->left = NULL;
    }
    cin >> rightNode;
    if (rightNode == "true") {
        root->right = BuildTreePreOrder();
    } else {
        root->right = NULL;
    }

    return root;
}

bool isIdentical(Node* r1, Node* r2) {
    if (r1 == NULL && r2 == NULL) return true;

    if (r1 == NULL || r2 == NULL) return false;

    bool lft = isIdentical(r1->left, r2->left);
    bool rst = isIdentical(r1->right, r2->right);

    return lft && rst;
}

int main() {
    Node* root1 = BuildTreePreOrder();
    Node* root2 = BuildTreePreOrder();

    if (isIdentical(root1, root2)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
