// Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

// Input Format
// Enter the number of nodes N and add N more numbers to the BST, then add the two numbers whose LCA is to be found.

// Constraints
// The number of nodes in the tree is in the range [2, 105].
// -109 <= Node.val <= 109
// All Node.val are unique.
// p != q
// p and q will exist in the BST

// Output Format
// Display the LCA value.

// Sample Input
// 4
// 5
// 3
// 2
// 7
// 7
// 5
// Sample Output
// 5
// Explanation
// None



#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertNode(Node *root, int data)
{
    if (root == NULL)
        return new Node(data);
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);
    return root;
}

Node *findLCA(Node *root, int p, int q)
{
    if (root == NULL)
        return NULL;
    if (p < root->data && q < root->data)
    {
        return findLCA(root->left, p, q);
    }
    if (p > root->data && q > root->data)
    {
        return findLCA(root->right, p, q);
    }
    return root;
}

int main()
{
    int N;
    cin >> N;

    Node *root = NULL;

    for (int i = 0; i < N; ++i)
    {
        int data;
        cin >> data;
        root = insertNode(root, data);
    }

    int p, q;
    cin >> p >> q;

    Node *lca = findLCA(root, p, q);

    if (lca != NULL)
    {
        cout << lca->data << endl;
    }
    else
    {
        cout << "No LCA found" << endl;
    }

    return 0;
}