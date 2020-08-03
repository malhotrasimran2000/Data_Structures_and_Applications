#include<stdio.h>
#include<stdlib.h>
#define max 10
typedef struct{
	int stack[max];
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

void push(STACK *S,int n){
	
       S->top=(S->top)+1;
       S->stack[S->top]=n;
}


int pop(STACK *S){

		 return(S->stack[S->top--]);
	        
}
	


int main(){
	
	STACK S;
	S.top=-1;
	int num;
	printf("Enter the decimal number : ");
	scanf("%d",&num);
	while(num!=0){
		if(isFull(&S)){
			push(&S,num%2);
			num=num/2;
		}
		else{
			printf("Stack overflow");
			exit(0);
		}
	}
	printf("Binary equivalent  :");
	while(isEmpty(&S)){
		num=pop(&S);
		printf("%d",num);
	}
	printf("\n");
	

}
