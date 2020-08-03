//Queue -Implementation using Circular Array

#include<iostream>

using namespace std;

class Queue{

	public:

	int* arr;
	int front,rear;
	int max_size;
	int curr_size;

	
		Queue(int size){
			front=0;
			rear=size-1;
			max_size=size;
			curr_size=0;
			arr=new int[max_size]();
		}
};

bool isEmpty(Queue q){
	if(q.curr_size==0){
		cout<<"Queue is empty"<<"\n";
;		return true;
	}
	else
		return false;



}

bool isFull(Queue q){
	if(q.curr_size==q.max_size){
		cout<<"Queue is full"<<"\n";
		return true;
	}
	else
		return false;

}

void enqueue(Queue &q,int ele){
	if(!isFull(q)){
			q.curr_size++;
			q.rear=(q.rear+1)%q.max_size;
			q.arr[q.rear]=ele;
	}

}

void dequeue(Queue &q){ 
	if(!isEmpty(q)){
		q.front=(q.front+1)%q.max_size;
		q.curr_size--;
	}

}

 int getFront(Queue q){
 	return q.arr[q.front];

 }

 void display(Queue q){
 	if(q.rear>=q.front){
 			for(int i=q.front;i<=q.rear;i++){
 				cout<<q.arr[i]<<"\t";
 			}
 	}
 	else{
 		for(int i=0;i<=q.rear;i++){
 			cout<<q.arr[i]<<"\t";
 		}
 		for(int i=q.front;i<=q.max_size-1;i++){
 			cout<<q.arr[i]<<"\t";
 		}
 	}
 }


 int main(){
 	int n;
 	cout<<"Enter the max size of the array : ";
 	cin>>n;
 	Queue q(n);
 	enqueue(q,1);
 	enqueue(q,2);
 	enqueue(q,3);
 	enqueue(q,4);
 	enqueue(q,5);
 	dequeue(q);
 	enqueue(q,6);
 	display(q);



 }