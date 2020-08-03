//Stack-Checking For Balanced Parentheses in an Expression

#include<iostream>
#define MAX 20

using namespace std;

 class Stack{
 public:
 	char stack[MAX];
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
 void push(Stack &s,char ele){
 	if(!isFull(s)){
 		s.top++;
 		s.stack[s.top]=ele;
 		 	}

 }

 char pop(Stack &s){
 	int ele;
 	if(!isEmpty(s)){
 		ele=s.stack[s.top];
 		s.top--;
 	}
 	return ele;
 	
 }


 void display(Stack s){
 	for(int i=0;i<=s.top;i++){
 		cout<<s.stack[i]<<"\t";
 	}
 	cout<<"\n";

 }
 bool isBalanced(Stack s,char str[]){
 	 int i;
    for(int i=0;str[i]!='\0';i++){
    	char c=str[i];
    	if(c==')'||c=='}'||c==']'){
    		 if(isEmpty(s)||s.top==')'||s.top=='}'||s.top==']'){
    		 	return false;
    		 }
    		char p=pop(s);
    		if(p==c){
    			continue;
    		}	
    	}
    	else if(c=='('||c=='{'||c=='[')
    		push(s,c);
    	
    }
    return isEmpty(s);
 }

 int main(){
 	Stack s;
 	s.top=-1;
 	char str[20];
 	cout<<"Enter the expression : ";
 	cin>>str;
 	bool ans=isBalanced(s,str);
 	cout<<ans<<"\n";

   
 	
 }