	#include<iostream>
	#include<algorithm>

	using namespace std;

	void swap(int &a ,int &b){
		int t=a;
		a=b;
		b=t;
	}

	int partition(int *a,int s,int e){
		//Inplace- cannot use another array
		int i=s-1;
		int j=s;

		int pivot=a[e];

		for( ;j<=e-1;){
			if(a[j]<pivot){
				i++;
				swap(a[i],a[j]);
			}
			j++;
		}
		swap(a[i+1],a[e]);
		return i+1;
	}

	void quick_sort(int *arr,int s,int e){
			//Base case-1 or 0 elements
			if(s>=e){
				return;
			}
			int pivot=partition(arr,s,e);

			quick_sort(arr,s,pivot-1);
			quick_sort(arr,pivot+1,e);

		
		}


	int main(){
			int arr[]={8,3,4,6,5,1,2};  
			int len=sizeof(arr)/sizeof(int);
			quick_sort(arr,0,len-1);
			for(int i=0;i<len;i++){
				cout<<arr[i]<<"\t";
			}
		}