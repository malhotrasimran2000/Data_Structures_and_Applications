
#include<iostream>
#include<vector>
#include<string>

using namespace std;

char lookup[]={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
int main(){
	vector<char> c;
	int t;
	cin>>t;
	unsigned long long int n;
	for(int i=0;i<t;i++){
		cin>>n;
		while(n>0){
			int rem=(n%26);
			c.push_back(lookup[rem]);
			if(rem==0){
				n=(n/26) -1;
			}
			else
				n=n/26;

		}
		reverse(c.begin(),c.end());
		for(int i=0;i<c.size();i++){
			cout<<c[i];
		}
	}
}


/*
//Reverse words in a given string
void reverse(string s){
	string x;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			reverse(x.begin(),x.end());
			x+='.';
			cout<<x;
			x.clear();

		}
		else{
			x+=s[i];
		}
	}
	reverse(x.begin(),x.end());
	cout<<x;


}

void reverseWords(string s){
	int start=0;
	for(int end=0;end<s.length();end++){
		if(s[end]=='.'){
			reverse(s.begin()+start,s.begin()+end);
			start=end+1;
		}
	}
	reverse(s.begin()+start,s.end());

	reverse(s.begin(),s.end());
	cout<<s;
}

int main(){
	string str;
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>str;
		reverseWords(str);
	}

}

*/


