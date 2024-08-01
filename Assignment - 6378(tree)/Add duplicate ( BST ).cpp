// For each node in a binary search tree, create a new duplicate node, and insert the duplicate as the left child of the original node.

// Input Format
// Enter the number of nodes N and add N more numbers to the BST

// Constraints
// None

// Output Format
// Display the tree

// Sample Input
// 3
// 2
// 1
// 3
// Sample Output
// 2 => 2 <= 3
// 1 => 2 <= END
// 1 => 1 <= END
// END => 1 <= END
// 3 => 3 <=END
// END => 3 <=END


#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};
node* insert(node* root,int d){
	if(root==NULL){
		root=new node(d);
		return root;
	}
	if(d < root->data){
		root->left = insert(root->left, d);
	}
	else{
		root->right = insert(root->right,d);
	}
	return root;
}
node* build(int n){
	node* root = NULL;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		root=insert(root,d);
	}
	return root;
}
void print(node* root){
	//base case
	if(root->left ==NULL && root->right == NULL){
		cout<<"END"<<" => "<<root->data<<" <= "<<"END"<<endl;
		return;
	}
	//recursive case
	if(root->left != NULL && root->right== NULL){
		cout<< root->left->data <<" => "<<root->data<<" <= "<<"END"<<endl;
		print(root->left);
	}
	else if(root->right!= NULL && root->left==NULL){
		cout<<"END"<<" => "<<root->data<<" <= "<<root->right->data<<endl;
		print(root->right);
	}
	else{
		cout<<root->left->data <<" => "<<root->data<<" <= "<<root->right->data<<endl;
		print(root->left);
		print(root->right);
	}
}
void addDuplicate(node* root){                 
	//base case
	if(root== NULL){
		return;
	}
	//recursive case
	node* duplicate = new node(root->data);
	duplicate->left = root->left;
	root->left = duplicate;
	addDuplicate(root->left->left);           
	addDuplicate(root->right);
}
int main() {
	int N;
	cin>>N;
	node* root = build(N);
	addDuplicate(root);
	print(root);
	return 0;
}