// Given a Binary tree, write code to create a separate array list for each level. You should return an arraylist of arraylist.

// Input Format
// Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

// Constraints
// None

// Output Format
// Display the resulting arraylist of arraylist according to given sample examples.

// Sample Input
// 50 true 12 true 18 false false true 13 false false false
// Sample Output
// [[50], [12], [18, 13]]


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
        ans.push_back(currentNode);
    }

    return ans;
}

int main() {
    Node* root = buildTree("true");

    vector<vector<int>> ans = print(root);
    cout<<"[";
    for(int i =0 ;i<ans.size(); i++){
        cout<<"[";
		for(int j =0; j<ans[i].size();j++){
			cout<<ans[i][j];
			if(j<ans[i].size()-1){
			cout<<", ";
			}


		}
		cout<<"]";
		if(i<ans.size()-1){
			cout<<", ";
		}
	}
    
	cout<<"]";

    return 0;
}
