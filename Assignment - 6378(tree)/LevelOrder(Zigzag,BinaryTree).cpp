// Given a binary tree. Print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even levels should be printed from right to left.

// Input Format
// Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

// Constraints
// None

// Output Format
// Display the values in zigzag level order in which each value is separated by a space

// Sample Input
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// Sample Output
// 10 30 20 40 50 60 73 
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

// Function to print tree in zigzag level order
vector<vector<int>> print(Node* root) {
    vector<vector<int>> ans;
    if (root == NULL) return ans;

    queue<Node*> q;
    q.push(root);
    int count = 0;

    while (!q.empty()) {
        int size = q.size();
        vector<int> currentNode;
        while (size-- > 0) {
            Node* node = q.front();
            q.pop();
            currentNode.push_back(node->data);

            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
        }
        count++;
        if (count % 2 == 0) {
            reverse(currentNode.begin(), currentNode.end());
        }
        ans.push_back(currentNode);
    }

    return ans;
}

int main() {
    Node* root = buildTree("true");

    vector<vector<int>> ans = print(root);

    // for (const auto& level : ans) {
    //     for (int val : level) {
    //         cout << val << " ";
    //     }
    // }

	for(int i =0; i<ans.size();i++){
		for(int j =0; j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
	}

    return 0;
}
