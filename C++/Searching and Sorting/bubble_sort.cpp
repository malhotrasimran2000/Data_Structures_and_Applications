//BUBBLE SORT
#include<iostream>

using namespace std;

void bubble_sort(int arr[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
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

	bubble_sort(arr,size);
	
}