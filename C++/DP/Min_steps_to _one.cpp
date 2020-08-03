//Minimum Steps to One
#include<iostream>

using namespace std;

int minSteps(int n,int dp[]){
	//Base Case
	if(n==1){
		return 0;
	}
	//Recursive case
	//Look Up
	if(dp[n]!=0){
		return dp[n];
	}
	int x,y,z;
	x=y=z=INT_MAX;
	if(n%2 == 0)
		x=minSteps(n/2,dp);
	if(n%3 == 0)
		y=minSteps(n/3,dp);

	z=minSteps(n-1,dp);
	return dp[n]=min(min(x,y),z)+1;
}


int main(){
	int n;
	cin>>n;
	int dp[100]={0};
	cout<<minSteps(n,dp);

}