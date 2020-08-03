//SIEVE OF ERATOSHENES-GENERATING PRIME NUMBERS
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int primes[100]={0};
	int numbers[100];
	int i,j,n;
	cout<<"Enter a number : ";
	cin>>n;	
	for(i=2;i<=n;i++){
		numbers[i]=i;
	}
	for(i=2;i<sqrt(n);i++){
		if(numbers[i]!=0){
			j=i*i;
			while(j<=n){
				numbers[j]=0;
				j=j+i;
			}
		}
	}
	int p=0;
	for(i=2;i<=n;i++){
		if(numbers[i]!=0){
			primes[p]=numbers[i];
			p=p+1;
		}
	}
	cout<<"\nPrime numbers less than equal to "<<n<<" are :\n";
	for(i=0;i<n;i++){
		if(primes[i]!=0)
			cout<<primes[i]<<"\t";
	}
}