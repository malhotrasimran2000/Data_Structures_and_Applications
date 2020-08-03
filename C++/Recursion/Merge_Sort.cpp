	#include<iostream>

	using namespace std;

	void merge(int *a,int s,int e){
		int mid=(s+e)/2;
		int i=s;
		int j=mid+1;
		int k =s;

		int temp[100];

		while(i<=mid && j<=e){
			if(a[i]<a[j]){
				temp[k++]=a[i++];
			}
			else{
				temp[k++]=a[j++];
			}
		}
		while(i<=mid){
			temp[k++]=a[i++];
		}
		while(j<=e){
			temp[k++]=a[j++];
		}
		for(int l=s;l<=e;l++){
			a[l]=temp[l];

		}
	}

	void merge_sort(int arr[],int s,int e){
		//Base case-1 or 0 elements
		if(s>=e){
			return;
		}
		//1.Divide 
		int mid=(s+e)/2;

		//2.Recursively Sort the two arrays
		merge_sort(arr,s,mid);
		merge_sort(arr,mid+1,e);

		//3.Merge the two arrays
		merge(arr,s,e);


	}

	int main(){
		int arr[]={8,3,4,6,5,1,2};  
		int len=sizeof(arr)/sizeof(int);
		merge_sort(arr,0,len-1);
		for(int i=0;i<len;i++){
			cout<<arr[i]<<"\t";
		}
	}
