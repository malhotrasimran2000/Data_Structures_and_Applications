#include<stdio.h>
#include<stdlib.h>
void reverse(int *ptr,int n){
	int i,temp;
	for(i=0;i<n/2;i++){
	temp=*(ptr+i);
	*(ptr+i)=*(ptr+n-1-i);
	*(ptr+n-1-i)=temp;
	}
}

void print(int *p,int n){
	for(int i=0;i<n;i++){
	printf("%d\t",*(p+i));
	}
}

int main(){
	int n;
	printf("Enter the no. of integers in the array : ");
	scanf("%d",&n);
	int *a=(int*)calloc(n,sizeof(int));
	printf("Enter the elements of the array :");
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("The original array is :");
	for(int i=0;i<n;i++){
	printf("%d\t",a[i]);
	}
	reverse(a,n);
	printf("\nThe reversed array is :");
	print(a,n);
	free(a);
	return 0;
}