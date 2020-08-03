//BIT MANIPULATION-To replace bits in N by M
#include<iostream>

using namespace std;

int clear_bit(int n,int i,int j){
	int a,b;
	a=-1<<(j+1);
	b=(1<<i)-1;
	int mask=a|b;
	return n&mask;

}

int replace_bits(int n,int m,int i){
	int mask=m<<i;
	return n|mask;

}

int main(){
	int num,m,i,j;
	int newnum;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter m";
	cin>>m;
	cout<<"\nEnter the range i to j: ";
	cin>>i>>j;
	num=clear_bit(num,i,j);
	newnum=replace_bits(num,m,i);
	cout<<"\nNew number is : "<<newnum<<"\n";
	
}

