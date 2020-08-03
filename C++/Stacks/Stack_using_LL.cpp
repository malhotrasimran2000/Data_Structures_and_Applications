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

 void push(node*&top,int ele){
 	cout<<"\nElement being pushed is :"<<ele;
 	if(top==NULL){
 		top=new node(ele);
 		return;
 	}
 	node*n=new node(ele);
 	n->next=top;
 	top=n;

 }

 void pop(node*&top){
 	if(top==NULL)
 		return;
 	node*temp=top;
 	top=top->next;
 	cout<<"Element being popped out is: "<<temp->data;
 	delete temp;
 	
 }

 void display(node* top){

 	if(top==NULL){
 		cout<<"\nStack empty\n";
 	}
 	while(top!=NULL){
 		cout<<top->data<<"\t";
 		top=top->next;
 	}
 	cout<<"\n";
 }

 int main(){
 	node*top=NULL;
 	push(top,5);
 	push(top,4);
 	push(top,3);
 	push(top,2);
 	display(top);
 	pop(top);
 	display(top);
 	push(top,1);
 	display(top);

 }