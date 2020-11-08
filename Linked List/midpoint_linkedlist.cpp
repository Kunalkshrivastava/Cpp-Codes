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

void midPoint(node* head){
	node* slow = head;
	node* fast = head;
	
	while(1){
		if(fast == NULL || fast->next == NULL)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	cout<<"\n mid point is "<<slow->data;
}
int main(){

	node* head = takeInputBetter();
	print(head);
	midPoint(head);
}
