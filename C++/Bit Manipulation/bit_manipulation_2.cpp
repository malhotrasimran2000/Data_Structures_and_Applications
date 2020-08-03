//BIT MANIPULATION-Extracting a bit 
#include<iostream>

using namespace std;

int extract_bit(int n,int i){
	int mask=1<<i;
	return n&mask;

}

int main(){
	int num,i;
	int flag;
	cout<<"Enter a number :";
	cin>>num;
	cout<<"Enter position :";
	cin>>i;
	flag=extract_bit(num,i);
	if(flag>0)
		cout<<"Bit at "<<i<<"th position is 1\n";
	else
		cout<<"Bit at "<<i<<"th position is 0\n";
	
	
}