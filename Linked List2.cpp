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

node* takeInput(){
	int data;
	node *head = NULL;
	cin>>data;
	while(data != -1){
		node * newNode = new node(data);
		
		if(head == NULL){
			head = newNode;
		}
		else{
			node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
		}
		cin>>data;
	}
	return head;
}
int main(){
	node* head = takeInput();
	print(head);
}
