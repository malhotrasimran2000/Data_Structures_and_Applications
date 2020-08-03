//Linked List-Midpoint
#include<iostream>

using namespace std;

class node{
public:
	int data;
	node*next;

	node(int d){
		data=d;
		next=NULL;
	}
};

void insert(node*&head,int data){

	if(head==NULL){
		head=new node(data);
		return;
	}

	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new node(data);
	return;

}

node* mid(node*head){
	if(head==NULL||head->next==NULL){
		return head;
	}
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next; 
		fast=fast->next->next;
	}
	return slow;
}


void display(node*&head){
	node*curr=head;
	while(curr!=NULL){
		cout<<curr->data<<"->";
		curr=curr->next;
	}
	cout<<"\n";
}

int main(){
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	//insert(head,5);
	display(head);
	node*m=mid(head);
	cout<<"Midpoint is :"<<m->data<<"\n";
}
		