//LINEAR SEARCH
#include<iostream>

using namespace std;

void linear_search(int arr[],int l,int k){
	int flag=0;
	for(int i=0;i<l;i++){
		if(arr[i]==k){
			cout<<"\nElement found at index "<<i<<"\n";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Element not found\n";
	}
}

int main(){
	
	int arr[]={1,2,3,4,56,32,67,89,9};
	int size=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter the number you want to search :\t ";
	cin>>key;
	linear_search(arr,size,key);
	
}