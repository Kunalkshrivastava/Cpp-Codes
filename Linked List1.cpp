#include<stdio.h>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node (int data){
			this->data = data;
			next = nullptr;//NULL
		}
};

class linkedList{
	node *head;
	
	linkedList(){
		head = nullptr;
	}
};

int main(){
	
	//statically	
	node n1(1);
	node *head = &n1;
	node n2(2);
	n1.next = &n2;
	
	//dynamically
	node *n3 = new node(30);
	n3->next = &n2;
	node *n4 = new node(40);
	n4->next = n3;
	
}
