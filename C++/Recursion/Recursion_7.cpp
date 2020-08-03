//Tower of Hanoi
#include<iostream>

using namespace std;

void towers(int n,char src,char dest,char aux){
	if(n==0){
		return;
	}
	towers(n-1,src,aux,dest);
	cout<<"\nMove "<<n<<" disk from "<<src<<" to "<<dest;
	towers(n-1,aux,dest,src);

}

int main(){
	int n;
	cout<<"Enter the number of discs :";
	cin>>n;
	cout<<"\nThe sequence of moves involved is :\n";
	towers(n,'S','D','A');
}