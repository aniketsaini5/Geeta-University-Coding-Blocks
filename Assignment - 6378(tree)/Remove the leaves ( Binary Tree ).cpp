// Given a binary tree, remove all the leaves from the tree

// Input Format
// Enter the value of the nodes of the tree

// Constraints
// None

// Output Format
// Display the tree in which all the leaves have been removed in pre-order traversal in the following format :
// Left->data => Root->data <= Right->Data
// Output END if left or right node is NULL

// Sample Input
// 50 true 12 true 18 false false false false
// Sample Output
// 12 => 50 <= END
// END => 12 <= END

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

node *removeLeaves(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }
    root->left = removeLeaves(root->left);
    root->right = removeLeaves(root->right);
    return root;
}

void printPreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << (root->left ? to_string(root->left->data) : "END") << " => " << root->data << " <= "
        << (root->right ? to_string(root->right->data) : "END") << endl;
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main()
{
    node *root = build("true");
    root = removeLeaves(root);
    printPreOrder(root);
    return 0;
}
