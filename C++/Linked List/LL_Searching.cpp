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

bool recursive_search(node*head,int key){
	if(head==NULL){
		return false;
	}
	if(head->data ==key){
		return true;
	}
	else{
	return recursive_search(head->next,key);
	}
}
bool iterative_search(node*head,int key){
	while(head!=NULL){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}
	return false;
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
	display(head);
	int key;
	cout<<"Enter the number to be searched  :";
	cin>>key;
	if(iterative_search(head,key))
		cout<<"Element found\n";
	else
		cout<<"Element not found\n";

	if(recursive_search(head,key))
		cout<<"Element found\n";
	else
		cout<<"Element not found\n";
	
	
}
		