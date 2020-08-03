//BIT MANIPULATION-Check if a number is odd or even 
#include<iostream>

using namespace std;

int last_bit(int n){
	return n&1?1:0;
}

int main(){
	int num;
	int flag;
	cout<<"Enter a number :";
	cin>>num;
	flag=last_bit(num);
	if(flag==0)
		cout<<"\nNumber is even \n";
	else
		cout<<"\nNumber is odd \n";
}