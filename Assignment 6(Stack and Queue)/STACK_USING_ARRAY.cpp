#include <iostream>
using namespace std;


class Stack{
	int A[100000];
	int end;

	public:

	Stack(){
		cout<<"constructor is Called\n";
		end=0;
	}

	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}

	int top(){
		cout<<"returning the value at top or last\n";
		return 0;
	}

	void pop(){
		cout<<"removing the last element\n";
	}

	int size(){
		cout<<"return the size of the queue\n";
		return 0;
	}

	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		return true;
	}
};

int main() {
	Stack s; 
	s.push(4);
	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";

	s.push(5);
	s.push(3);
	cout<<"front: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";

	cout<<"top: "<<s.top()<<"\n";
	s.pop();
	cout<<"size: "<<s.size()<<"\n";
	cout<<"empty: "<<s.isEmpty()<<"\n";
	return 0;
}
