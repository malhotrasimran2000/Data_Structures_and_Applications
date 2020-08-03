#include<stdio.h>
#include<string.h>
int palindrome(char str[],int first,int last){
   static int flag=0;
   if(str[first]!=str[last]){
   	        flag=0;
   	        return flag;
   	    }
   else if(first!=last){
   	  palindrome(str,++first,--last);
   }
   else if(first==last){
   	     flag=1;
   	     return flag;

   }

}

int main(){
	char arr[20];
	printf("Enter a string :");
	gets(arr);
	int f=0;
	int l=strlen(arr)-1;
	int flag=palindrome(arr,f,l);
	if(flag==1)
		printf("Entered string is a palindrome");
	else
		printf("Entered string is not a palindrome");

	return 0;
}