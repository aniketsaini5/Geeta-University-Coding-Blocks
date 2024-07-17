// Design a stack that supports push,pop,top,retrieving the minimum element in constant time.

// Input Format
// First line of input contains integer n denoting the size of the string array. Next line of input contains n space separated string where i-th string represent i-th operation.(i.e, push,pop,top,getMin)

// Constraints
// Functions pop, top and getMin operations will always be called on non-empty stacks.

// Output Format
// Print the answer according to input operations.

// Sample Input
// 7
// push push push getMin pop top getMin
// -2 0 -3
// Sample Output
// -3 0 -2 
// Explanation
// push -2
// push 0
// push -3
// print -3 (getMin)
// pop -3
// print 0 (top)
// print -2 (getMin)

#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<int> stack;
    vector<int> minStack;
public:
    MinStack() {}
    void push(int val) {
        stack.push_back(val);
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }
    void pop() {
        if (stack.empty()) {
            return;
        }
        if (stack.back() == minStack.back()) {
            minStack.pop_back();
        }
        stack.pop_back();
    }
    int top() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return stack.back();
    }
    int getMin() {
        if (minStack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return minStack.back();
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> operations(n);
    for (int i = 0; i < n; ++i) {
        cin >> operations[i];
    }
    MinStack minStack;
    vector<int> pushValues;
    for (int i = 0; i < n; ++i) {
        if (operations[i] == "push") {
            int value;
            cin >> value;
            pushValues.push_back(value);
        }
    }
    int pushIndex = 0;
    for (const string& op : operations) {
        if (op == "push") {
            minStack.push(pushValues[pushIndex++]);
        } else if (op == "pop") {
            minStack.pop();
        } else if (op == "top") {
            cout << minStack.top() << " ";
        } else if (op == "getMin") {
            cout << minStack.getMin() << " ";
        }
    }
    cout << endl;
    return 0;
}

//////////////////////////////////////////////////////////////////////////

or

/////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
       stack<int> s,ss;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty()){
            ss.push(val);
        }else if(ss.top()>=val){
            ss.push(val);
        }
        
    }
    
    void pop() {
        if(s.top()==ss.top()){
            ss.pop();
        }
        s.pop();
        
    }
    
    int top() {
        
        return s.top();
    }
    
    int getMin() {
        return ss.top();
        
    }
};

int main(){
	MinStack obj;
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	for(int i=0;i<n;i++){
		string s=v[i];
		// cin>>s;
		if(s=="push"){
			int x;
			cin>>x;
			obj.push(x);
		}else if(s=="top"){
			cout<<obj.top()<<" ";
		}else if(s=="pop"){
			obj.pop();
		}else{
			cout<<obj.getMin()<<" ";
		}
	}
	return 0;
}
