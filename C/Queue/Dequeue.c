	#include<stdio.h>
	#include<string.h>
	#define max 10
	typedef struct{
		char s[max][max];
		int front; 
		int rear;
	}dequeue;

	void insertfront(dequeue*q,char x[]){
	if(q->front==-1 && q->rear==-1){
			q->front=0;
		q->rear++;
		strcpy(q->s[q->front],x);
		return;
	}
	if(q->front==0){
		printf("Queue  full at the front end");
		return;
	}
	q->front--;        
	strcpy(q->s[q->front],x);
	}



	void insertrear(dequeue*q,char x[]){
	if(q->rear==max-1){
		printf("Queue full at the rear end");
		return ;
	}
	if(q->front==-1){
		q->front=0;
	}
		q->rear++;
		strcpy(q->s[q->rear],x);

	}
	char* delete(dequeue*q){
		if(q->front==-1){
		    return ("Queue empty");
		}
		
			return q->s[q->front++];
		

	}
	void display(dequeue*q){
		if(q->front==-1){
			printf("Queue empty");
		    return ;
		}
		int i;
		for(i=q->front;i<=q->rear;i++){
			printf("%s\t",q->s[i]);
		}

	}
	int main(){
		dequeue Q;
		Q.front=-1;
		Q.rear=-1;
		printf("\nInserting 'one' at the rear end");
		insertrear(&Q,"one");
		printf("\nInserting 'two' at the rear end");
		insertrear(&Q,"two");
		printf("\nInserting 'three' at the rear end\n");
		insertrear(&Q,"three");
		display(&Q);
		printf("\nElement being deleted is  %s",delete(&Q));
		printf("\nElement being deleted is  %s\n",delete(&Q));
		printf("\nInserting 'four' at the front end");
		insertfront(&Q,"four");
		printf("\nInserting 'five' at the front end\n");
		insertfront(&Q,"five");
		display(&Q);
		

	}