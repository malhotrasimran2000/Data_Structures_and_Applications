//Linear Search using Recursion
#include<iostream>

using namespace std;

int linear_search(int arr[],int len,int key){
	
	if(len<0){
		return -1;

	}
	if(arr[len]==key){
		return len;
	}
	return linear_search(arr,len-1,key);
	

}

int main(){
	int arr[]={1,2,3,4,5,7,8};
	int size=sizeof(arr)/sizeof(int);
	int f=linear_search(arr,size-1,3);
	if(f==-1){
		cout<<"Element not found"<<"\n";
	}
	else
		cout<<"Element found at index "<<f<<"\n";

}