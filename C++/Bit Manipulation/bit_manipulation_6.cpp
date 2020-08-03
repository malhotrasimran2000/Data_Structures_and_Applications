//BIT MANIPULATION-To clear a range of bits(last i bits)
#include<iostream>

using namespace std;

int clear_bit(int n,int i){
	int mask=-1<<i;
	return n&mask;

}

int main(){
	int num,i;
	int newnum;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter no.of bits:";
	cin>>i;
	newnum=clear_bit(num,i);
	cout<<"\nNew number is : "<<newnum<<"\n";
	
}

