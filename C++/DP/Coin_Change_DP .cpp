//Minimum Steps to One
#include<iostream>

using namespace std;

int coinChange(int n,int coins[],int T,int dp[]){

	//Base Case
	if(n==0){
		return 0;
	}
	//Recursive case
	//Look Up
	if(dp[n]!=0){
		return dp[n];
	}
	int ans=INT_MAX;
	for(int i=0;i<T;i++){
		if(n-coins[i]>=0){
			int sub=coinChange(n-coins[i],coins,T,dp);
			ans=min(ans,sub+1);

		}
		
	}
	dp[n]=ans;
	return dp[n];
}


int main(){
	int n;
	cin>>n;
	int coins[]={1,7,10};
	int dp[100]={0};
	int T=sizeof(coins)/sizeof(int);
	cout<<coinChange(n,coins,T,dp);

}