// Given a binary tree , print its nodes from root to bottom as visible from left side of tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the left view of the tree

// Sample Input
// 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
// Sample Output
// 1 2 4
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \           \
//    4       5           6
// When viewed from the left , we would see the nodes 1,2 and 4.


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
            if (current->left!=NULL) {
                q.push(current->left);
            }
            if (current->right !=NULL) {
                q.push(current->right);
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
