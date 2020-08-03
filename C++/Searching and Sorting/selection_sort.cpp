//SELECTION SORT
#include<iostream>

using namespace std;

void selection_sort(int arr[],int n){
	int i,j;
	int min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
			int temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}

	cout<<"\nSorted array :\n";
	for(int k=0;k<n;k++){
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

	selection_sort(arr,size);
	
}