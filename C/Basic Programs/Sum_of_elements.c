#include<stdio.h>
#include<stdlib.h>
double add(int n,double* a){
double s=0;
for(int j=0;j<n;j++){
s=s+(*(a+j));
	
}
return s;	
}

int main(){
int num;
double sum;
printf("Enter the value of num : ");
scanf("%d",&num);
double *a=(double*)calloc(num,sizeof(double));
printf("Enter the integers into the array\n");
for(int i=0;i<num;i++){
	printf("Enter value in index %d",i);
	scanf("%lf",&a[i]);
	}
sum=add(num,a);
printf("The sum of all integers in the array is %lf",sum);
free(a);
}