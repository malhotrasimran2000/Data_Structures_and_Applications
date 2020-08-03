//Queue -Implementation using stacks
#include<iostream>

using namespace std;
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

 void pop(Stack &s1,Stack &s2){
 	int ele;
 	while(s1.top!=0){
 		ele=s1.stack[s1.top];
 		push(s2,ele);
 		s1.top--;
 	}
 	ele=s1.stack[s1.top];
 	s1.top--;
 	cout<<"Element being popped out is :"<<ele<<"\n";
 	while(!isEmpty(s2)){
 		ele=s2.stack[s2.top--];
 		push(s1,ele);
 	}
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
 	Stack s1,s2;
 	s1.top=-1;
 	s2.top=-1;
 	push(s1,1);
 	push(s1,2);
 	push(s1,3);
 	push(s1,4);
 	push(s1,5);
 	display(s1);
 	pop(s1,s2);
 	pop(s1,s2);
 	pop(s1,s2);
 	display(s1);
 	pop(s1,s2);
 	pop(s1,s2);
 	
 	 
 	
 }