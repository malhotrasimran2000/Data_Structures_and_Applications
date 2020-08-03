//To check if a undirected graph is a tree or not we check if the graph is cyclic or acyclic
//For a graph to be acyclic,no node should be visited twice also while checking we need to ensure that
//the already visited node is not the parent of the current node 
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

	bool is_tree(int src){
		int *visited=new int[v];
		int *parent=new int[v];

		for(int i=0;i<v;i++){
			visited[i]=0;
			parent[i]=i;
		}
		
		queue<int> q;
		q.push(src);
		visited[src]=1;

		while(!q.empty()){
			int node=q.front();
			q.pop();
			for(int i :l[node]){

				if(visited[i]==1 && parent[node]!=i){
					return false;

				}
				else if(visited[i]==0){
					q.push(i);
					visited[i]=1;
					parent[i]=node;
				}

			}

		}
		return true;

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
	cout<<G.is_tree(src);1

	

}