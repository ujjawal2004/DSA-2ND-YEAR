include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* createNode(int val){
	Node *temp = new Node;
	temp->data = val;
	return temp;
}




class Queue{
	Node *head;
	Node *tail;
	int s;

	public:
	
	Queue(){
		cout<<"constructor is Called\n";
		s=0;
		head=NULL;
		tail=NULL;
	}

	
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}

	int front(){
		cout<<"returning the value at front\n";
		return 0;
	}

	void pop(){
		cout<<"removing the first element\n";
	}

	int size(){
		cout<<"return the size of the queue\n";
		return 0;
	}

	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		return true;
	}
};

int main() {
	Queue q; 
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";

	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";

	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
