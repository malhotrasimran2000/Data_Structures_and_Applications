//BIT MANIPULATION-To update a particular bit 

#include<iostream>

using namespace std;

int clear_bit(int n,int i){
	int mask=~(1<<i);
	return n&mask;
}

int update_bit(int n,int v,int i){
	int mask=v<<i;
	return n|mask;


}


int main(){
	int num,i;
	int v;
	int newnum;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter position :";
	cin>>i;
	cout<<"\nEnter bit 0/1 :";
	cin>>v;
	num=clear_bit(num,i);
	newnum=update_bit(num,v,i);
	cout<<"\nNew number is : "<<newnum<<"\n";
	
}