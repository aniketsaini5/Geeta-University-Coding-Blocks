// Given postorder and inorder traversal of a tree. Create the original tree on given information.

// Input Format
// Enter the size of the postorder array N then add N more elements and store in the array, then enter the size of the inorder array M and add M more elements and store in the array. here M and N are same.

// Constraints
// None

// Output Format
// Display the tree using the display function

// Sample Input
// 3
// 1
// 3
// 2
// 3
// 1
// 2
// 3
// Sample Output
// 1 => 2 <= 3
// END => 1 <= END
// END => 3 <= END

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree(vector<int>& inorder, vector<int>& postorder, int inorderStart, int inorderEnd, int& postorderIndex, unordered_map<int, int>& inorderMap) {
    if (inorderStart > inorderEnd) {
        return NULL;
    }

    int rootValue = postorder[postorderIndex--];
    node* root = new node(rootValue);

    int inorderIndex = inorderMap[rootValue];

    root->right = buildTree(inorder, postorder, inorderIndex + 1, inorderEnd, postorderIndex, inorderMap);
    root->left = buildTree(inorder, postorder, inorderStart, inorderIndex - 1, postorderIndex, inorderMap);

    return root;
}

node* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int postorderIndex = postorder.size() - 1;
    unordered_map<int, int> inorderMap;
    for (int i = 0; i < inorder.size(); i++) {
        inorderMap[inorder[i]] = i;
    }
    return buildTree(inorder, postorder, 0, inorder.size() - 1, postorderIndex, inorderMap);
}

void display(node* root) {
    if (root == NULL) {
        return;
    }

    cout << (root->left ? to_string(root->left->data) : "END") << " => " << root->data << " <= " 
         << (root->right ? to_string(root->right->data) : "END") << endl;

    display(root->left);
    display(root->right);
}

int main() {
    int N;
    cin >> N;

    vector<int> postorder(N);
    for (int i = 0; i < N; i++) {
        cin >> postorder[i];
    }

    int M;
    cin >> M;

    vector<int> inorder(M);
    for (int i = 0; i < M; i++) {
        cin >> inorder[i];
    }

    node* root = buildTree(inorder, postorder);
    display(root);

    return 0;
}
