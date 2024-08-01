// Replace each node with the sum of all greater nodes in a given BST

// Input Format
// Enter the number of nodes N and add N more numbers to the BST

// Constraints
// None

// Output Format
// Display the resulting tree

// Sample Input
// 3
// 2
// 1
// 3
// Sample Output
// 5 => 3 <= 0
// END => 5 <= END
// END => 0 <= END


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

void replaceWithSumOfGreaterNodes(Node* root, int& sum) {
    if (root == NULL) {
        return;
    }

    // Traverse the right subtree first
    replaceWithSumOfGreaterNodes(root->right, sum);

    // Update the sum and the current node's value
    sum += root->data;
    root->data = sum - root->data;

    // Traverse the left subtree
    replaceWithSumOfGreaterNodes(root->left, sum);
}

void display(Node* root) {
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

    Node* root = NULL;
    for (int i = 0; i < N; i++) {
        int data;
        cin >> data;
        root = insert(root, data);
    }

    int sum = 0;
    replaceWithSumOfGreaterNodes(root, sum);
    display(root);

    return 0;
}
