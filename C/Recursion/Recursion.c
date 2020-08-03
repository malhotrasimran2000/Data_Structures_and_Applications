#include<stdio.h>
#include<string.h>
#include<math.h>

int fibo(int n){
   if(n<=1)
   	 return n;
   return (fibo(n-1)+fibo(n-2));

}


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


void towers(int num,char frompeg,char topeg,char auxpeg){
	if(num==1){
		printf("\nMove disk 1 from peg %c to peg %c",frompeg,topeg);
		return;
	}
	towers(num-1,frompeg,auxpeg,topeg);
	printf("\nMove disk %d from peg %c to peg %c ",num,frompeg,topeg);
	towers(num-1,auxpeg,topeg,frompeg);
}

int main(){
	int choice;
	int X=0;
while(X==0){
    printf("\nEnter 1:fibonacci series,2:Copying a string,3:Palindrome,4:TowerofHanoi  :");
	scanf("%d",&choice);
	int n;
	char a[20];
	char arr[20];
	char string[20];
	int num=0;

	switch(choice){

        case 1:  
        		
			    printf("Enter the no. of terms :");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
				printf("%d\t",fibo(i));
						}
			    break;
	    case 2:
	            
				printf("Enter a string :");
				scanf(" %[^\n]s",string);
				int len=strlen(string);
				copy(string,a);
				printf("Copied string is :");
				for(int i=0;i<len;i++){
						printf("%c",*(a+i));
					}
                break;
        case 3:
		  
				printf("Enter a string :");
				scanf(" %[^\n]s",arr);
				int f=0;
				int l=strlen(arr)-1;
				int flag=palindrome(arr,f,l);
				if(flag==1)
					printf("Entered string is a palindrome");
				else
					printf("Entered string is not a palindrome");
				break;

	    case 4:
	            printf("Enter the no. of discs :");
				scanf("%d",&num);
				printf("\nTotal no. of moves  :%f\n",((pow(2,num))-1));
				printf("The sequence of moves involved in the Tower of hanoi is :");
				towers(num,'S','D','A');
				
                break;			         

		}

			
				printf("\nEnter 0 to continue :");
				scanf("%d",&X);
			}
	
return 0;
}
