//Tiling problem (Total no. of ways to arrange the tiles):4xN brick wall,4x1 tiles
#include<iostream>

using namespace std;

int total_ways(int n){
	if(n==1|n==2|n==3)
		return 1;
	else if(n==4)
		return 2;
	else 
		return total_ways(n-1)+total_ways(n-4);

}

int main(){
	int n;
	cout<<"Enter the number of tiles :";
	cin>>n;
	int t=total_ways(n);
	cout<<"Total number of ways in which tiles can be arranged  :"<<t<<"\n";

}