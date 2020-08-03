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
 	

 }

 int top(Stack s){
 	return s.stack[s.top];
 }

void transfer(Stack &s1,Stack &s2,int n){
	while(n-1>=0){
		push(s2,s1.stack[s1.top]);
		pop(s1);
		n--;
	}
}

 void reverse(Stack &s1,Stack &s2){
 	int n=sizeof(s1.stack)/sizeof(int);
 	for(int i=0;i<n;i++){
			 	int x=top(s1);
			 	pop(s1);
			 	transfer(s1,s2,n-1-i);
			 	push(s1,x);
			 	transfer(s2,s1,n-1-i);
			 	
    }
 }

 void display(Stack s){
 	for(int i=0;i<=s.top;i++){
 		cout<<s.stack[i]<<"\t";
 	}
 	cout<<"\n";

 }

 int main(){
 	Stack s1,s2;
 	s1.top=-1;
 	s2.top=-1;
 	push(s1,1);
 	push(s1,2);
 	push(s1,3);
 	push(s1,4);
 	push(s1,5);
 	display(s1);
 	reverse(s1,s2);
 	display(s1);
 }