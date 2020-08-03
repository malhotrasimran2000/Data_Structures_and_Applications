//Bubble Sort using Recursion
#include<iostream>

using namespace std;
int arr[]={2,6,5,3,4,8,1};
void swap_num(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

void bubble_sort(int arr[],int len){
	if(len==0){
		return;
	}
	for(int i =0;i<len-1;i++){
		if(arr[i]>arr[i+1]){
			swap_num(&arr[i],&arr[i+1]);
		}

	}
	bubble_sort(arr,len-1);

}
void bubble_sort2(int arr[],int j,int len){
	//Base Case
	if(len==0){
		return;
	}
	if(j==len){
		bubble_sort2(arr,0,len-1);
	}
	//Recursive Case
	if(arr[j]>arr[j+1]){
			swap_num(&arr[j],&arr[j+1]); 
		}
	
	bubble_sort2(arr,j+1,len);
	

}

int main(){
	int size=sizeof(arr)/sizeof(int);
	bubble_sort(arr,size-1);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"\t";
	}
}