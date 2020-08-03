#include<stdio.h>

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
	int num;
	printf("Enter the no. of discs :");
	scanf("%d",&num);
	printf("The sequence of moves involved in the Tower of hanoi is :");
	towers(num,'S','D','A');
	
}