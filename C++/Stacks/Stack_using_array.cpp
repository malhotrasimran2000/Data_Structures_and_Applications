//Stack-Implementation using an array

#include<iostream>
#define MAX 5

using namespace std;

 class Stack{
 public:
 	int stack[MAX];
 	int top;
 };

 bool isEmpty(Stack s){
 	if(s.top==-1){
 		return true;
 	}
 	else
 		return false;

 }

 bool isFull(Stack s){
 	if(s.top==MAX-1){
 		return true;
 	}
 	else
 		return false;

 }
 void push(Stack &s,int ele){
 	if(!isFull(s)){
 		s.top++;
 		s.stack[s.top]=ele;
 		 	}

 }

 void pop(Stack &s){
 	int ele;
 	if(!isEmpty(s)){
 		ele=s.stack[s.top];
 		s.top--;
 	}
 	cout<<"Element being popped out is :"<<ele<<"\n";

 }

 int top(Stack s){
 	return s.stack[s.top];
 }

 void display(Stack s){
 	for(int i=0;i<=s.top;i++){
 		cout<<s.stack[i]<<"\t";
 	}
 	cout<<"\n";

 }

 int main(){
 	Stack s;
 	s.top=-1;
 	push(s,1);
 	push(s,2);
 	push(s,3);
 	push(s,4);
 	push(s,5);
 	display(s);
 	pop(s);
 	pop(s);
 	int t=top(s); 
 	cout<<"\nTop element is :"<<t<<"\n";
 	display(s);
 }