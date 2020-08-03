//BINARY SEARCH
#include<iostream>

using namespace std;

int binary_search(int arr[],int l,int k){
	int beg,mid,end;
	beg=0;
	end=l-1;
	
	while(beg<=end){
		mid=(beg+end)/2;
		if(arr[mid]==k){
			return mid;
		}
		else if(k<arr[mid]){
			end=mid-1;
		}
		else if(k>arr[mid]){
			beg=mid+1;
		}
			
	}
	return -1;

}

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(int);
	int key;
	cout<<"Enter the number you want to search :\t ";
	cin>>key;
	int flag=binary_search(arr,size,key);
	if(flag==-1){
		cout<<"Element not found\n";
	}
	else
		cout<<"Element found at index "<<flag<<"\n";
	
}