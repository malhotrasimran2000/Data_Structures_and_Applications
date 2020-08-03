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
		l[y].push_back(x);

	}
	//Recursive Function
	void dfs_helper(int src,int visited[]){
		visited[src]=1;
		cout<<src<<"\t";
		for(int i:l[src]){
			if(!visited[i]){
				dfs_helper(i,visited);
			}
		}

	}

	void dfs(int src){
		int visited[10]={0};
		
		dfs_helper(src,visited);
			
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
	
	int src;
	cout<<endl<<"Enter the source node : ";
	cin>>src;
	cout<<"\nDFS Graph Traversal Order is :";
	G.dfs(src);

	

}