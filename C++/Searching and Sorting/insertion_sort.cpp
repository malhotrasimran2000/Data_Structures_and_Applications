//INSERTION SORT
#include<iostream>

using namespace std;

void insertion_sort(int arr[],int size){
	int i,j;
	for(i=1;i<=n-1;i++){
		j=i-1;
		ele=arr[i];
		while(j>=0 && arr[j]>ele){
			 arr[j+1]=arr[j];
			 j--;
		}
		arr[j+1]=ele;
	}
	
	
	cout<<"\nSorted array :\n";
	for(int k=0;k<size;k++){
		cout<<arr[k]<<"\t";
	}
	cout<<"\n";
}

int main(){
	
	int arr[]={1,2,3,4,56,32,67,89,9};
	int size=sizeof(arr)/sizeof(int);
	cout<<"Unsorted array :\n";
	for(int i =0;i<size;i++){
		cout<<arr[i]<<"\t";
	}

	insertion_sort(arr,size);
	
}