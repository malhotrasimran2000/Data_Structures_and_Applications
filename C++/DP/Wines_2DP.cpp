
#include<iostream>

using namespace std;

int wines(int p[],int i,int j,int y,int dp[][10]){

	//Base Case
	if(i>j){
		return 0;
	}
	if(dp[i][j]!=0){
		return dp[i][j];;

	}

	//Recursive case
	int x=p[i]*y + wines(p,i+1,j,y+1);
	int y=p[j]*y + wines(p,i,j-1,y+1);
	int ans=max(x,y);

	return dp[i][j]=ans;
}


int main(){
	int prices[]={2,3,5,1,4};
	int dp[10][10]={0};
	int size=sizeof(prices)/sizeof(int);
	cout<<wines(prices,0,size-1,1,dp);
}