//BIT MANIPULATION-To clear a range of bits(from i to j)
#include<iostream>

using namespace std;

int clear_bit(int n,int i,int j){
	int a,b;
	a=-1<<(j+1);
	b=(1<<i)-1;
	int mask=a|b;
	return n&mask;

}

int main(){
	int num,i,j;
	int newnum;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter the range i to j: ";
	cin>>i>>j;
	newnum=clear_bit(num,i,j);
	cout<<"\nNew number is : "<<newnum<<"\n";
	
}

