//MAXIMUM SUBARRAY SUM

#include<iostream>

using namespace std;

//Gives the maximum sum of a subarray o(n)
	int main(){
		int arr[100];
		int cs=0,ms=0;
		int i,n;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>arr[i];
			cs=cs+arr[i];
			if(cs<0){
				cs=0;
					}
			ms=max(ms,cs);
		}
	cout<<ms<<endl;

	}
	
//MAXIMUM SUM SUBARRAY O(N^2) - - Gives the subarray too 
	int main(){
		int arr[100];
		int cs[100];
		int sum=0,max=0;
		int i,j,n,l,r;
		cin>>n;

		for(i=0;i<n;i++){
			cin>>arr[i];
			if(i==0)
				cs[i]=arr[i];
			else
				cs[i]=cs[i-1]+arr[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				sum=cs[j]-cs[i-1];
				if(sum>max){
					max=sum;
					l=i;
					r=j;
				}
			}
		}
		cout<<max<<endl;
		for(i=l;i<=r;i++){
			cout<<arr[i]<<"\t";
			
		}