// Given a binary search tree, replace each nodes' data with the sum of all nodes' which are greater or equal than it. Include the current node's data also.

// Input Format
// The first line contains a number n showing the length of the inorder array of BST. The next line contains n integers denoting the elements of the array.

// Constraints
// 2 ≤ N ≤ 10^3

// Output Format
// Print the preorder traversal of the new tree.

// Sample Input
// 7
// 20 
// // 30 
// // 40 
// // 50 
// // 60 
// // 70 
// // 80
// // Sample Output
// // 260 330 350 300 150 210 80
// // Explanation
// // The original tree looks like

// //             50             
// //         /        \                
// //       30          70
// //     /    \       /   \ 
// //   20    40      60    80
// // We are supposed to replace the elements by the sum of elements larger than it.
// // 80 being the largest element remains unaffected .
// // 70 being the second largest element gets updated to 150 (70+80)
// // 60 becomes 210 (60 + 70 + 80)
// // 50 becomes 260 (50 + 60 + 70 + 80)
// // 40 becomes 300 (40 + 50 + 60 + 70 + 80)
// // 30 becomes 330 (30 + 40 + 50 + 60 + 70 + 80)
// // 20 becomes 350 (20 + 30 + 40 + 50 + 60 + 70 + 80)

// // The new tree looks like

// //            260             
// //         /        \                
// //      330         150
// //     /    \       /   \ 
// //   350    300   210    80
// // The Pre-Order traversal (Root->Left->Right) looks like :
// // 260 330 350 300 150 210 80.

#include <iostream>
#include <vector>

using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int val){
		data = val;
		right = NULL;
		left = NULL;


	}
};

// Function to build BST from the inorder traversal array
node*buildTree(vector<int>& inorder, int st, int nd) {
    if (st> nd) {
        return NULL;
    }
    int mid = (st+ nd) / 2;
    node* root = new node(inorder[mid]);
    root->left =buildTree(inorder, st, mid - 1);
    root->right =buildTree(inorder, mid + 1, nd);
    return root;
}

// Function to replace each node's value with the sum of all greater or equal nodes
void replaceWithSum(node* root, int& SUM) {
    if (!root) {
        return;
    }
    replaceWithSum(root->right, SUM);
    SUM += root->data;
    root->data = SUM;
    replaceWithSum(root->left, SUM);
}

// Function to perform preorder traversal of the tree
void preorderTraversal(node* root, vector<int>& result) {
    if (!root) {
        return;
    }
    result.push_back(root->data);
    preorderTraversal(root->left, result);
    preorderTraversal(root->right, result);
}

int main() {
    int n;
    cin >> n;
    vector<int> inorder(n);
    for (int i = 0; i < n; ++i) {
        cin >> inorder[i];
    }

    node* root =buildTree(inorder, 0, n - 1);
    int SUM = 0;
    replaceWithSum(root, SUM);

    vector<int> result;
    preorderTraversal(root, result);

    for (int i = 0; i < result.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;

    return 0;
}
