#include<stdio.h>
void secLargest(int a[50],int n){
	int max;
	int sl;
	int temp;
	int j,k;
max=a[0];
sl=a[0];
for(j=0;j<n;j++){
	if(a[j]>max)
		max=a[j];
      }
for(j=0;j<n;j++){
	if(a[j]!=max){
		if(a[j]>sl)
		  sl=a[j];
	}
		
      }
printf("The second largest number is %d ",sl);

}
int main(){
	int a[50];
	int n;
	int secL;
printf("Enter the no. of integers in the list : ");
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("\nEnter value in index %d  ",i);
	scanf("%d",&a[i]);
	}
secLargest(a,n);
}