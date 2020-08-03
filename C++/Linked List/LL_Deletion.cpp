//Linked List-Deletion
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

void insertatEnd(node*&head,int data){

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

void deletefromEnd(node*head){
	node*n;
	node*curr=head;
	node*prev;
	while(curr->next!=NULL){
		prev=curr;
		curr=curr->next;
	}
	prev->next=NULL;
	delete curr;

}

void deleteatHead(node*&head){
	if(head==NULL){
		return;
	}
	node*n=head;
	head=head->next;
	delete n;
}

void deleteatMiddle(node*&head,int pos){

	if(head->next==NULL){
		node*n=head;
		head=NULL;
		delete n;
		cout<<"List empty";
		return;

	}
	node*curr=head;
	node*prev;
	int j=1;
	while(j<=pos){
		prev=curr;
		curr=curr->next;
		j++;
	}
	prev->next=curr->next;
	delete curr;

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
	insertatEnd(head,1);
	insertatEnd(head,2);
	insertatEnd(head,3);
	insertatEnd(head,4);
	deleteatMiddle(head,1);
	deletefromEnd(head);
	deleteatHead(head);
	display(head);  
}