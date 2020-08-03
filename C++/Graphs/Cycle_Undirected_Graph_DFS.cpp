//Cycle Detection in an Undirected Graph 
//We need to look for the presence of a node that is already visited


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
	bool helper(int src,int *visited,int *parent){
		visited[src]=1;
		
		for(int i:l[src]){
			parent[i]=src;
			if(visited[i]==1 && parent[src]!=i){
				return true;
			}
			else if(!visited[i]){
				bool check=helper(i,visited,parent);
				if(check==true){
					return true;
				}
			}
		}
		return false;

	}

	bool contains_cycle(int src){
		int *visited=new int[v];
		int *parent=new int[v];
		for(int i=0;i<v;i++){
			visited[i]=0;
			parent[i]=i;
		}
	
		
		return helper(src,visited,parent);
			
		
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
	if(G.contains_cycle(src)){
		cout<<"YES";
	}
	else
		cout<<"NO";
	

}