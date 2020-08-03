//Minimum Steps to One
#include<iostream>

using namespace std;

int minSteps(int n){
	int dp[100]={0};

	for(int i=2;i<=n;i++){
		int a,b,c;
		a=b=c=INT_MAX;
		if(i%2==0){
			a=dp[i/2];
		}
		if(i%3==0){
			b=dp[i/3];
		}
		c=dp[i-1];
		dp[i]=min(min(a,b),c)+1;;
	}
	return dp[n];
	
}


int main(){
	int n;
	cin>>n;
	int dp[100]={0};
	cout<<minSteps(n);

}