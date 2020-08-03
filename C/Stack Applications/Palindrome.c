#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct{
	char stack[max];
	int top;
}STACK;

int isFull(STACK *S){
		if(S->top==max-1)
		    return 0;
		else
			return 1;
}

int isEmpty(STACK *S){
	if(S->top==-1)
		    return 0;
		else
			return 1;

}

void push(STACK *S,char ch){
	
       S->top=(S->top)+1;
       S->stack[S->top]=ch;
}


char pop(STACK *S){

		 return(S->stack[S->top--]);
	        
}
	


int main(){
	
	STACK S;
	S.top=-1;
	char str[20];
	char ch,x;
	int flag=1;
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	int i=0;
	while(str[i]!='\0'){
		if(isFull(&S)){
			push(&S,str[i]);
			i++;
		}
		else{
			printf("Stack overflow");
			exit(0);
		}
	}
	int j=0;
	while((isEmpty(&S))&&(S.top!=S.top/2)){
		x=pop(&S);
		if(x!=S.stack[j])
			flag=0;
		j++;
		
	}
	if(flag==1)
	    printf("Palindrome  ");
	else 
		printf("Not a Palindrome");

}


















































































































































































































































































































































































