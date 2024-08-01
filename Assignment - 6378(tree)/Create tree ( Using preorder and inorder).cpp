// Given preorder and inorder create the tree

// Input Format
// Enter the size of the preorder array N then add N more elements and store in the array denoting the preorder traversal of the tree. Then enter the size of the inorder array M and add M more elements and store the inorder traversal of the array.

// Constraints
// 1 <= N, M <= 10^4

// Output Format
// Display the tree using a modified preorder function. For each node , first print its left child's data , then the data of the root itself , then the data of its right child. Do this for each node in a new line in preorder manner. If one of the children does not exist print END in its place. Refer to the sample testcase.

// Sample Input
// 3
// 1 2 3
// 3
// 3 2 1
// Sample Output
// 2 => 1 <= END
// 3 => 2 <= END
// END => 3 <= END
// Explanation
// The above tree looks like

//          1
//        /
//      2
//    /
//  3

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val){
		data = val;
		left = NULL;
		right = NULL;

	}
};

node* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, 
                          unordered_map<int, int>& inorderMap, int& preorderIndex, 
                          int inorderStart, int inorderEnd) {
    if (inorderStart > inorderEnd) {
        return nullptr;
    }

    int rootdata = preorder[preorderIndex++];
    node* root = new node(rootdata);

    int inorderIndex = inorderMap[rootdata];

    root->left = buildTreeHelper(preorder, inorder, inorderMap, preorderIndex, inorderStart, inorderIndex - 1);
    root->right = buildTreeHelper(preorder, inorder, inorderMap, preorderIndex, inorderIndex + 1, inorderEnd);

    return root;
}

node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); i++) {
        inorderMap[inorder[i]] = i;
    }

    int preorderIndex = 0;
    return buildTreeHelper(preorder, inorder, inorderMap, preorderIndex, 0, inorder.size() - 1);
}

void modifiedPreorder(node* node) {
    if (!node) {
        return;
    }

    cout << (node->left ? to_string(node->left->data) : "END") << " => " << node->data << " <= " 
         << (node->right ? to_string(node->right->data) : "END") << endl;

    modifiedPreorder(node->left);
    modifiedPreorder(node->right);
}

int main() {
    int N, M;
    cin >> N;

    vector<int> preorder(N);
    for (int i = 0; i < N; i++) {
        cin >> preorder[i];
    }

    cin >> M;

    vector<int> inorder(M);
    for (int i = 0; i < M; i++) {
        cin >> inorder[i];
    }

    node* root = buildTree(preorder, inorder);

    modifiedPreorder(root);

    return 0;
}
