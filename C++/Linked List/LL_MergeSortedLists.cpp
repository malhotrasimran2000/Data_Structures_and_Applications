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

node* merge(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	node*head; 
	if(head1->data<head2->data){
		head=head1;
		head->next=merge(head1->next,head2);
	}
	else{
		head=head2;
		head->next=merge(head1,head2->next);
	}
	return head;


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
	node* head1=NULL;
	node* head2=NULL;
	int m,n,val;
	cout<<"Enter the no. of nodes in list 1 :";
	cin>>m;
	cout<<"\nEnter the no. of nodes in list 2 :";
	cin>>n;
	cout<<"\nInsert nodes in list 1 :\n";
	for(int i=0;i<m;i++){
		cout<<"\nEnter value : ";
		cin>>val;
		insert(head1,val);
	}
	cout<<"\nInsert nodes in list 2 :\n";
	for(int i=0;i<n;i++){
		cout<<"\nEnter value : ";
		cin>>val;
		insert(head2,val);
	} 
	cout<<"\nList 1 :";
	display(head1);
	cout<<"\nList 2 :";
	display(head2);
	cout<<"\n";
	node*head=merge(head1,head2);
	cout<<"\nMerged List :";
	display(head);
}
		