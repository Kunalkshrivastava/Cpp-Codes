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
void deleteRecursive(int count, int i, node* head){
	//node* head1= head;
	if(count > i )
		return;
	if(count == i-1){
		node *temp = head->next;
		head->next = temp->next;
		delete temp;
		return;
	}
	deleteRecursive(count+1,i,head->next);
}
int main(){

	node* head = takeInputBetter();
	print(head);
	cout<<"enter position for deletion of node";
	int i;
	cin>>i;
	deleteRecursive(0,i,head);
	print(head);
}
