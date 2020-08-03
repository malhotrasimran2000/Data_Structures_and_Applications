//GCD-EUCLID'S ALGORITHM and LCM -Recursion
//GCD*LCM=a*b
#include<iostream>

using namespace std;

int euclid_gcd(int a,int b){

	return b==0?a:euclid_gcd(b,a%b);
}

int main(){
	int m,n,LCM;
	cout<<"Enter two numbers whose GCD you want to find  :";
	cin>>m>>n;
	int result=euclid_gcd(m,n);
	cout<<"GCD is : "<<result<<"\n";
	LCM=(m*n)/result;
	cout<<"LCM is : "<<LCM<<"\n";
	
}