	#include<iostream>
	
	using namespace std;

	void generate_subsets(char *in,char *out,int i,int j){

		if(in[i]=='\0'){
			out[j]='\0';
			cout<<out<<endl;
			return;
		}

		out[j]=in[i];
		generate_subsets(in,out,i+1,j+1);

		generate_subsets(in,out,i+1,j);
	}

	int main(){
		char input[]="abc";
		char output[10];

		generate_subsets(input,output,0,0);
	}