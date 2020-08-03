
#include<iostream>

using namespace std;

int coinChange(int n,int coins[],int T){
	int dp[100]={0};

	for(int i=1;i<=n;i++){
		dp[i]=INT_MAX;
		for(int j=0;j<T;j++){
			if(n-coins[j]>=0){
			int subprob=dp[n-coins[j]];
			dp[i]=min(dp[i],subprob+1);

		}

		}
		
	}
	return dp[n];	
}


int main(){
	int n;
	cin>>n;
	int coins[]={1,7,10};
	
	int T=sizeof(coins)/sizeof(int);
	cout<<coinChange(n,coins,T);

}