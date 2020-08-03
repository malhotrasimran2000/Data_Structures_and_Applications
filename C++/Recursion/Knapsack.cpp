	#include<iostream>
	
	using namespace std;

	int profit(int n,int c,int *w,int *p){

		if(n==0 || c==0){
			return 0;
		}
		int inc,exc;
		inc=exc=0;
		if(c>=w[n-1]){
			inc=p[n-1]+profit(n-1,c-w[n-1],w,p);
		}
		exc=profit(n-1,c,w,p);

		return max(inc,exc);
	}


	int main(){
		int weight[]={10,20,30};
		int price[]={60,100,120};


		int capacity=50;
		int n=sizeof(weight)/sizeof(int);

		cout<<profit(n,capacity,weight,price);


		
		
	}
