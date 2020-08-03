//Linked List-Reversing
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
//RECURSIVE METHOD
node* reverse(node* head){
	//Base Case
	if(head->next==NULL || head==NULL){
		return head;
	}
	//Recursive Case
	node* smallhead=reverse(head->next);
	node* curr=head;
	curr->next->next=curr;
	curr->next=NULL;

	return smallhead;
	
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
	head=reverse(head);
	display(head);
	
	
	
}
		