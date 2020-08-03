#include<iostream>
#include<list>
#include<queue>

using namespace std;

//Graph Implementation

class Graph{

	int v,e;
	list<int> *l;


public:
	Graph(int V,int E){
		v=V;
		e=E;
		l=new list <int>[v];

	}

	void print(){
		cout<<v<<"\t"<<e;
	}

	void addEdges(int x,int y){
		l[x].push_back(y);
		

	}
	//Recursive Function
	void dfs_helper(int src,int visited[],list<int> &ordering){
		visited[src]=1;
		
		for(int i:l[src]){
			if(!visited[i]){
				dfs_helper(i,visited,ordering);
			}
		}
		ordering.push_front(src);
		return;

	}

	void dfs(){
		int visited[10]={0};
		list<int> ordering;
		for(int i=0;i<v;i++){
			
			if(!visited[i]){
			
				dfs_helper(i,visited,ordering);
				
			}
			
		}	
		for(int j:ordering){
			cout<<j<<"\t";
		}
	}

};


int main(){
	
	int n,e;
	cin>>n;
	cout<<"Enter the number of edges : ";
	cin>>e;
	int x,y;
	Graph G(n,e);
	G.print();
	for(int i=0;i<e;i++){
		cout<<endl<<"Insert edge between  :";
		cin>>x>>y;
		G.addEdges(x,y);
		
	}
	
	
	cout<<"\nTopological Sort using DFS:";
	G.dfs();

	

}