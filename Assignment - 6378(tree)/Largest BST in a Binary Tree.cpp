// Given a Binary Tree, write a program that returns the size of the largest subtree which is also a Binary Search Tree (BST)

// Input Format
// The first line of input will contain an integer n. The next line will contain n integers denoting the the preorder traversal of the BT. The next line will contain n more integers denoting the inorder traversal of the BT.

// Constraints
// 2 ≤ N ≤ 10^3

// Output Format
// A single integer denoting the size ( no of nodes in tree ) of largest BST in the given tree.

// Sample Input
// 4
// 60 65 50 70
// 50 65 60 70
// Sample Output
// 2
// Explanation
// The tree looks like

//              60
//           /      \
//        65           70
//      /           
//    50       
// The largest BST subtree is

//        65           
//      /           
//    50       

// which has the size 2 i.e. it has 2 nodes in it.\\



#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to build a binary tree from preorder and inorder traversals
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inEnd, unordered_map<int, int>& inMap) {
    if (inStart > inEnd) return NULL;

    int rootVal = preorder[preIndex++];
    TreeNode* root = new TreeNode(rootVal);

    // Find the root index in inorder traversal
    int inIndex = inMap[rootVal];

    // Recursively build left and right subtrees
    root->left = buildTree(preorder, inorder, preIndex, inStart, inIndex - 1, inMap);
    root->right = buildTree(preorder, inorder, preIndex, inIndex + 1, inEnd, inMap);

    return root;
}

// Helper function to find the size of the largest BST subtree
tuple<int, int, int> largestBSTSubtree(TreeNode* root) {
    if (!root) return {0, INT_MAX, INT_MIN}; // size, min, max

    tuple<int, int, int> leftResult = largestBSTSubtree(root->left);
    tuple<int, int, int> rightResult = largestBSTSubtree(root->right);

    int leftSize = get<0>(leftResult);
    int leftMin = get<1>(leftResult);
    int leftMax = get<2>(leftResult);

    int rightSize = get<0>(rightResult);
    int rightMin = get<1>(rightResult);
    int rightMax = get<2>(rightResult);

    if (leftSize == -1 || rightSize == -1 || root->val <= leftMax || root->val >= rightMin) {
        return {max(leftSize, rightSize), INT_MIN, INT_MAX}; // Not a BST
    }

    int size = leftSize + rightSize + 1;
    int minVal = min(root->val, leftMin);
    int maxVal = max(root->val, rightMax);

    return {size, minVal, maxVal}; // Size of the BST subtree
}

int main() {
    int n;
    cin >> n;
    vector<int> preorder(n);
    vector<int> inorder(n);
    
    for (int i = 0; i < n; ++i) cin >> preorder[i];
    for (int i = 0; i < n; ++i) cin >> inorder[i];
    
    // Map to store inorder indices for quick access
    unordered_map<int, int> inMap;
    for (int i = 0; i < n; ++i) inMap[inorder[i]] = i;

    int preIndex = 0;
    TreeNode* root = buildTree(preorder, inorder, preIndex, 0, n - 1, inMap);

    tuple<int, int, int> result = largestBSTSubtree(root);
    int largestBSTSize = get<0>(result);
    cout << largestBSTSize << endl;

    return 0;
}