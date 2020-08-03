#include<iostream>
	
using namespace std;

void generate_brackets(char *s,int n,int i,int open,int closed){
	if(i==2*n){
		s[i]='\0';
		cout<<s<<endl;
		return;
	}

	if(closed<open){
		s[i]=')';
		generate_brackets(s,n,i+1,open,closed+1);
	}
	if(open<n){
		s[i]='(';
		generate_brackets(s,n,i+1,open+1,closed);
	}


}


int main(){
	int n;
	cin>>n;
	char s[20];
	generate_brackets(s,n,0,0,0);



}