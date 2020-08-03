//2048 problem:Given an integer 2048,print two zero four eight
#include<iostream>

using namespace std;
char arr[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void print(int n){
	if(n==0){
		return;
	}
	
	print(n/10);
	cout<<arr[n%10]<<"\t";

}

int main(){
	int num;
	cout<<"Enter an integer  :";
	cin>>num;
	print(num);
}