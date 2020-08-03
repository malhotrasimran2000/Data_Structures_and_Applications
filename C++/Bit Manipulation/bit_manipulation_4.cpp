//BIT MANIPULATION-To clear ith bit
#include<iostream>

using namespace std;

int clear_bit(int n,int i){
	int mask=~(1<<i);
	return n&mask;

}

int main(){
	int num,i;
	int newnum;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter position :";
	cin>>i;
	newnum=clear_bit(num,i);
	cout<<"\nNew number is : "<<newnum<<"\n";
	
}

