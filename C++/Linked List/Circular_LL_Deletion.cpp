//Circular Linked List-Deletion
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

void delete_node(node*head,int key){
	//If list is empty
	if(head==NULL){
		return;
	}
	//If there is only one node present in the list and is equal to the key
	if(head->data==key && head->next==head){
		delete head;
		head=NULL;
		return;
	}
	node*curr=head;
	node*temp;
	//If the head is the node being deleted
	if(head->data==key){
		while(curr->next!=head){
			curr=curr->next;
		}
		curr->next=head->next;
		delete head;
		head=curr->next;
	}
	//If the node to be deleted is present somewhere in between 
	while(curr->next!=head && curr->next->data!=key){
		curr=curr->next;
	}
	if(curr->next->data==key){
		temp=curr->next;
		curr->next=temp->next;
		delete temp;
	}
	else{
		cout<<"No such key found ";
	}
	

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
	delete_node(head,4);
	display(head); 

}
	