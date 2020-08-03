//Linked List-Kth node from the end
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

node* k_node(node*head,int k){
	if(head==NULL){
		return NULL;
	}
	node*slow=head;
	node*fast=head;
    int i=0;
    while(i<k){
    	fast=fast->next;
    	i++;
    }
    while(fast!=NULL){
    	slow=slow->next;
    	fast=fast->next;
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
	insert(head,5);
	insert(head,6);
	insert(head,7);
	display(head);
	int k;
	cout<<"Enter the value of k (kth node from end)  :";
	cin>>k;
	node*m=k_node(head,k);
	cout<<k<<"th node is :"<<m->data<<"\n";
}
		