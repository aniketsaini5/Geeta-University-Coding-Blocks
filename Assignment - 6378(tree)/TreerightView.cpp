// Given a binary tree, Print its right side view ordered from top to bottom.
// Right Side view is defined as nodes that are visible from right side of the tree ie. to a person standing to the right of the tree,only these nodes are visible.

// Input Format
// The first line contains level order traversal of the tree.In the level order traversal , a -1 represent a null child while any other value represent a node in the tree.

// Constraints
// 1<=number of nodes in the tree <=10^5

// Output Format
// Print the Right Side View as space separated integer ordered from top to bottom.

// Sample Input
// 1 2 3 -1 -1 -1 -1
// Sample Output
// 1 3
// Explanation
// To a person standing to the right,only nodes with value 1 and 3 are visible.

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

// left view
vector <int>  printLeftView(Node* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {
      int flage = 0;
        int size = q.size();
        while(size-- >0){
            Node *current = q.front();
            q.pop();

             if(flage == 0) {  
                ans.push_back(current->data);
                flage++;
            }
            if (current->right !=NULL) {
                q.push(current->right);
            }
            if (current->left!=NULL) {
                q.push(current->left);
            }
        }
    }

    return ans;
}

int main() {
    Node* root = buildTree();
    vector<int> ans = printLeftView(root);

	for(int i= 0; i<ans.size(); i++){
		
		cout<<ans[i]<<" ";
	}

    return 0;
}




class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

