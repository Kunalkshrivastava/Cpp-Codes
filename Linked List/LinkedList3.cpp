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

//Better time complexity
node* takeInputBetter(){
	int data;
	node *head = NULL;
	node *tail = NULL;
	cin>>data;
	while(data != -1){
		node * newNode = new node(data);
		
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
		}
		cin>>data;
	}
	return head;
}
int main(){

	node* head = takeInputBetter();
	print(head);
}
