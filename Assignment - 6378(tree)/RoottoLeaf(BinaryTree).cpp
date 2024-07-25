// iven a binary tree and a number k, print out all root to leaf paths where the sum of all nodes value is same as the given number.

// Input Format
// First line contains the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL. Second line contains the number k.

// Constraints
// None

// Output Format
// Display the root to leaf path whose sum is equal to k.

// Sample Input
// 10 true 20 true 30 false false true 50 false false true 40 true 60 false false true 73 false false
// 60
// Sample Output
// 10 20 30
// Explanation
// The given tree is in pre order traversal. So convert it into binary tree and check root to leaf path sum.

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

// Function to build the tree from pre-order input
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

void findPaths(Node* root, vector<int> path, int sum, int k) {
    if (!root) return;

    // Add current node to path
    path.push_back(root->data);
    sum += root->data;
	
    // Check if it's a leaf node and the sum equals k and 
    if (!root->left && !root->right && sum == k) {
        for (int i=0;i<path.size();i++){
            cout << path[i] << " ";
        }
        cout << endl;
    }
	
    // Recur for left and right children
    findPaths(root->left, path, sum, k);
    findPaths(root->right, path, sum, k);

}

int main() {
    Node* root = buildTree("true");
    int k;
    cin >> k;

    vector<int> path;

    // Find and print all paths with sum equal to k
    findPaths(root, path, 0, k);

    return 0;
}
