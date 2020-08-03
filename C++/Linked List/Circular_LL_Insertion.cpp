//Circular Linked List-Insertion 
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
		head->next=head;
		return;
	}
    node*n=new node(data);
	n->next=head;
	node*curr=head;
	while(curr->next!=head){
		curr=curr->next;
	}
	curr->next=n;
	head=n;

}

  
void display(node*&head){
	node*curr=head;
	while(curr->next!=head){
		cout<<curr->data<<"->";
		curr=curr->next;
	}
	cout<<curr->data;
	cout<<"\n";
}

int main(){
	node* head=NULL;
	insert(head,4);
	insert(head,3); 
	insert(head,2); 
	insert(head,1);
	display(head);  

}
	