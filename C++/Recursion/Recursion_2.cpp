//Convert a string to an integer 

#include<iostream>
#include<math.h>
using namespace std;

int StringtoInteger(string str,int len){
	
	int y=str.length()-1;
	int x=str[len]-'0';
	if(len==0){
		return x*pow(10,y);
	}
	else{
	return x*pow(10,y-len)+StringtoInteger(str,len-1);
	}
}


int main(){
	string str="1234";
	int number;
	number=StringtoInteger(str,str.length()-1);
	cout<<number<<"\n";
}