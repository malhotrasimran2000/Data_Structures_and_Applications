#include<stdio.h>
#define max 6
typedef struct{
	int a[max];
	int front;
	int rear;
}queue;
int isFull(queue *q){
	if(q->rear==max-1){
		printf("Queue full");
		return 1;
	}
	else
		return 0;

}
int isEmpty(queue *q){
	if(q->front==-1){
			printf("Queue empty");
		return 1;
	}
	else
		return 0;


	}
void enqueue(queue *q,int ele){
	if(!isFull(q)){
		if(q->front==-1 && q->rear==-1){
			q->front=0;
			q->rear++;
			q->a[q->rear]=ele;
		}
		else{
			int i=q->rear;
			q->rear++;
			while(ele<=q->a[i]&& i>=0){
				q->a[i+1]=q->a[i];
				i--;

			}
q->a[i+1]=ele;
		}
	}

}
int deleteq(queue *q){
	if(!isEmpty(q)){
		return q->a[q->front++];
	}
}
void display(queue *q){
	
		int i;
		for(i=q->front;i<=q->rear;i++){
			printf("%d \t",q->a[i]);
		
	}
}
int main(){
	queue Q;
	Q.front=-1;
	Q.rear=-1;
	int ele;
	enqueue(&Q,3);
	enqueue(&Q,5);
	enqueue(&Q,4);
	enqueue(&Q,2);
	display(&Q);
	printf("\nElement being deleted is %d\n ",deleteq(&Q));
	display(&Q);
}
