// Given three linked lists, say a, b and c, find one node from each list such that the sum of the values of the nodes is equal to a given number say, Target. As any number of answers can be possible return the first one you get while traversing.

// Input Format
// The First Line contains 3 Integers n, m and k as the Size of the Three LinedLists. Next 3 Lines contains n, m and k integers Respectively as the elements of Linked Lists. Next Line contains the an Integer as Target.

// Constraints
// The Size of the Lists can be different.

// Output Format
// Display the 3 elements from each of the Lists whose sum is equals to the target separated by space.

// Sample Input
// 3 3 3
// 12 6 29
// 23 5 8
// 90 20 59
// 101
// Sample Output
// 6 5 90
// Explanation
// In the Given Sample Input, 6, 5 and 90 from lists 1, 2 and 3 respectively add to give 101.

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data){
            this->data=data;
            next=NULL;
        }
};

// how to take linked list input from user

node* buildLinkedList(int n){
    node* head=NULL;
    node* tail=NULL;
    while(n>0){
		int data;
    	cin>>data;
        if(head==NULL){
            node* n=new node(data);
            head=n;
            tail=n;
        }else{
            node* n=new node(data);
            tail->next=n;
            tail=n;
        }
        n--;
    }
    return head;
}
// to find length of LL

int length(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void solve(node* h1,node* h2,node* h3,int target){
	unordered_map<int,bool> um;
	for(node* temp=h3;temp!=NULL ; temp=temp->next){
		um[temp->data]=true;
	}

	for(node* temp1=h1;temp1!=NULL ; temp1=temp1->next){
		for(node* temp2=h2;temp2!=NULL ; temp2=temp2->next){
			int ntarget=target-(temp1->data+temp2->data);
			if(um.count(ntarget)==true){
				cout<<temp1->data<<" "<<temp2->data<<" "<<ntarget<<endl;
				return ;
			}
		}
	}
	return  ;
}

int main(){
	int n,m,k;
	cin>>n>>m>>k;
    node* h1=buildLinkedList(n);
	node* h2=buildLinkedList(m);
	node* h3=buildLinkedList(k);
	int target;
	cin>>target;

	solve(h1,h2,h3,target);
}