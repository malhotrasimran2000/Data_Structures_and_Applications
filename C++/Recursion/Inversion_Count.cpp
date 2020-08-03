//Inversion Count- Find the no. of pairs where a[i] > a[j] and i<j

	#include<iostream>

	using namespace std;

	int merge(int *a,int s,int e){
		int mid=(s+e)/2;
		int i=s;
		int j=mid+1;
		int k =s;
		int temp[1000];
		int count=0;

		while(i<=mid && j<=e){
			if(a[i]<a[j]){
				temp[k++]=a[i++];
			}
			else{
				temp[k++]=a[j++];
				count+=mid-i+1;
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
		return count;
	}

	int inversion_count(int arr[],int s,int e){
		//Base case-1 or 0 elements
		if(s>=e){
			return 0;
		}
		//1.Divide 
		int mid=(s+e)/2;

		//2.Recursively Sort the two arrays
		int x=inversion_count(arr,s,mid);
		int y=inversion_count(arr,mid+1,e);
		int z=merge(arr,s,e);
	 	
	 	return x+y+z;
		

	}

	int main(){
		int arr[]={1,5,2,6,3,0};  
		int len=sizeof(arr)/sizeof(int);
		cout<<inversion_count(arr,0,len-1); 
	}
