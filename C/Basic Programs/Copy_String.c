	#include<stdio.h>
	#include<string.h>
	void copy(char *str,char*ptr){
	     static int i=0;
	     if(*str=='\0')
	     	return;
	     else{
	     	*(ptr+i)=*str;
	     	i++;
	     	str++;
	     	copy(str,ptr);

	     }


	}
	int main(){
		char string[20];
		char a[20];
		printf("Enter a string :");
		gets(string);
		int l=strlen(string);
		copy(string,a);
	   printf("Copied string is :");
		
		for(int i=0;i<l;i++){
			printf("%c",*(a+i));
		}

		return 0;
	}