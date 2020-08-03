#include<stdio.h>
int fibo(int n){
   if(n<=1)
   	 return n;
   return (fibo(n-1)+fibo(n-2));

}

int main(){
int n;
printf("Enter the no. of terms :");
scanf("%d",&n);
for(int i=0;i<n;i++){
	printf("%d\t",fibo(i));
}
return 0;
}