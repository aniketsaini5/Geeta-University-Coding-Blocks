// Given a list, modify it such that all odd elements appear before the even ones. The order of odd elements and even shall remain intact.

// link

// See explanation for more info.

// Input Format
// The first line contains an integer N, the number of elements in the list.

// The next line contains N space separated integral elements of the list.

// Constraints
// 1 <= T <= 1000 0 <= N <= 10^6

// Output Format
// T lines of output

// Sample Input
// 5
// 1 2 3 4 5
// Sample Output
// 1 3 5 2 4 
// Explanation
// Input : 1 -> 2 -> 3 -> 11-> 4 -> 5

// The order of odd elements and even does not change. For instance 3 comes before 5 in the input, so comes in the output.

// Output: 1 -> 3 -> 11 -> 5 -> 2 -> 4


#include <iostream>  
using namespace std;  

class node {  
public:  
    int data;  
    node* next;  

    node(int val){  
        data = val;  
        next = NULL;  
    }  
};  

class Linklist {  
public:  
    node* head;  
    node* tail;  

    Linklist() {  
        head = NULL;  
        tail = NULL;  
    }  

    void input(int val) {  
        node* newnode = new node(val);  
        if (head == NULL) {  
            head = newnode;  
            tail = newnode;  
        } else {  
            tail->next = newnode;  
            tail = newnode;  
        }  
    }  

    void print() {  
        node* temp = head;  
        while (temp != NULL) {  
            cout << temp->data << " ";  
            temp = temp->next;  
        }  
        cout << endl;  
    }  

    void OddEven() {  
        if (head == NULL) return;  // Empty list  

        node* oddHead = NULL;  
        node* evenHead = NULL;  
        node* oddTail = NULL;  
        node* evenTail = NULL;  

        node* current = head;  

        while (current != NULL) {  
            if (current->data % 2 != 0) {  // Odd  
                if (oddHead == NULL) {  
                    oddHead = current;  
                    oddTail = current;  
                } else {  
                    oddTail->next = current;  
                    oddTail = current;  
                }  
            } else {  // Even  
                if (evenHead == NULL) {  
                    evenHead = current;  
                    evenTail = current;  
                } else {  
                    evenTail->next = current;  
                    evenTail = current; 
                }  
            }  
            current = current->next;  
        }  

        //odd ke last node even k head ko point karegi
        if (oddTail != NULL) {  
            oddTail->next = evenHead;  
        }  

        // even ki last node NULL hogi  
        if (evenTail != NULL) {  
            evenTail->next = NULL;  
        }  

        if (oddHead == NULL){
			head = evenHead;
		} else{
			head = oddHead;
		}
        if (evenTail != NULL) {  
            tail = evenTail;  
        } else {  
            tail = oddTail; // ager koi even no nahi ho to tail ko oddno p set kar do
        }  
    }  
};  

int main() {  
    Linklist list;  
    int n;  
    cin >> n;  
    while (n--) {  
        int x;  
        cin >> x;  
        list.input(x);  
    }  

    list.OddEven();  
    list.print();  

    return 0;  
}