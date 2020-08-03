#include<stdio.h>
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

void push(STACK *S,char x){
	if(isFull(S)){
       S->top=(S->top)+1;
       S->stack[S->top]=x;
	}
	else 
		printf("Stack overflow" );
}


char pop(STACK *S){

	if(isEmpty(S)){
		 return(S->stack[S->top--]);
	         }
      
}
	
	
void display(STACK *S){
	for(int i=0;i<=S->top;i++)
		printf(" %c\t",S->stack[i]);
	
}

int main(){
	
	int choice=0;
	char ch;
	STACK S;
	S.top=-1;
	while(choice!=4){
		printf("\nEnter 1 to push,2 to pop and 3 to display and 4 to exit");
		scanf("%d",&choice);

		if(choice==1){
			printf("Enter the element to be pushed :");
			scanf(" %c",&ch);
			push(&S,ch);
						}
		else if(choice==2)
			printf("Element being popped out is :  %c",pop(&S));
			

		else if(choice==3)
			display(&S);

	
		}
	

}
