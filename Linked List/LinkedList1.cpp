#include<stdio.h>
#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node (int data){
			this->data = data;
			next = NULL; //nullptr;//NULL
		}
};

class linkedList{
	node *head;
	
	linkedList(){
		head = NULL; //nullptr;
	}
};

void print(node *head){
	node *temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;		
	}
}

int main(){
	
	//statically	
	node n1(1);
	node *head = &n1;
	node n2(2);
	n1.next = &n2;
	
	//dynamically
	node *n3 = new node(30);
	n2.next = n3;
	node *n4 = new node(40);
	n3->next = n4;
	print(head);
}
