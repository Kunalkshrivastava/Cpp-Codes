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
void deleteNode(int i, node* head){
	int count = 0;
	node *temp = head;
	while(count != i-1 && temp != NULL){
		temp = temp->next;
		count++;
	}
	if(temp != NULL){
		node* temp1 = temp->next;
		temp->next = temp1->next;
		delete temp1;
	}
	
}
int main(){

	node* head = takeInputBetter();
	print(head);
	cout<<"enter position for deletion";
	int i;
	cin>>i;
	deleteNode(i,head);
	print(head);
}
