//Multiplication of two numbers using recursion

#include<iostream>
#include<cstdlib>
using namespace std;

void swap_num(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int multiply(int a,int b){

	if(a<b){
		swap_num(&a,&b);
		return multiply(a,b);
	}

	else if(b==0)
		return 0;
	
	else if(a<0 && b<0){
		return abs(a)+multiply(abs(a),abs(b)-1);
	}
	else if(b<0){
		return b+multiply(b,a-1);
	}
	else 
	{
		return a+multiply(a,b-1);
	}

}

int main(){
	int a,b;
	cout<<"Enter two numbers  :\t";
	cin>>a>>b;
	cout<<a<<"\t"<<b<<"\n";
	cout<<"Answer  : "<<multiply(a,b)<<"\n";


}