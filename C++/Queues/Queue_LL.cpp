//Queue -Implementation using Circular Array

#include<iostream>

using namespace std;

#define MAX_SIZE 5
int curr_size=0;

class node{

public:
	int data;
	node*next;

	  node(int ele){
	  	data=ele;
	  	next=NULL;

	  }
};


bool isEmpty(){
	if(curr_size==0){
		cout<<"Queue is empty"<<"\n";
;		return true;
	}
	else
		return false;


}


void enqueue(node*&rear,node*&front,int ele){
	node*n=new node(ele);
		if(rear==NULL){
			front=n;
			rear=n;
			return;
		}
		rear->next=n;
		rear=n;
		curr_size++;	
	

}

void dequeue(node*&front){ 
	if(!isEmpty()){
		node*temp=front;
		front=front->next;
		curr_size--;
		delete temp;
	}


}

 int getFront(node*front){
 	return front->data;

 }

 void display(node*front){
 	while(front!=NULL){
 		cout<<front->data<<"\t";
 		front=front->next;
 	}


 
 }


 int main(){
 	node*front=NULL;
 	node*rear=NULL;
 	enqueue(rear,front,1);
 	enqueue(rear,front,2);
 	enqueue(rear,front,3);
 	enqueue(rear,front,4);
 	enqueue(rear,front,5);
 	dequeue(front);
 	enqueue(rear,front,6);
 	display(front);



 }