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

int length(node*head){
	int count=0;
	while(head!=NULL){
		head=head->next;
		count++;
	}
	return count;
}

void insertatHead(node*&head,int data){
	node*n=new node(data);
	n->next=head;
	head=n;

}

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
void insertatMiddle(node*&head,int data,int pos){
	
	if(head==NULL||pos==0){
		insertatHead(head,data);
	}
	else if(pos>length(head)){
		insertatEnd(head,data);
	}
	else{
		int j=1;
		node*temp=head;
		while(j<=pos-1){
			temp=temp->next;
			j=j+1;
		}
		node*n=new node(data);
		n->next=temp->next;
		temp->next=n;
	}
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
	insertatHead(head,5);
	insertatHead(head,4); 
	insertatHead(head,2); 
	insertatHead(head,1);
	insertatMiddle(head,3,2);
	insertatEnd(head,6);
	display(head);  
}