#include<iostream>
#include<list>


using namespace std;

int main(){
	list<int> *l;
	int n,e;
	cin>>n;
	l=new list <int>[n];
	cout<<"Enter the number of edges : ";
	cin>>e;
	int x,y;
	
	for(int i=0;i<e;i++){
		cout<<endl<<"Insert edge between  :";
		cin>>x>>y;
		l[x].push_back(y);
		l[y].push_back(x);
		
	}
	for(int i=0;i<n;i++){
		cout<<i<<"- ->";
		for(auto it:l[i]){
			cout<<it<<"\t";
		}
		cout<<endl;

	}
	

}