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

	void bfs(int src){
		int visited[10]={0};
		queue<int> q;
		q.push(src);
		visited[src]=1;
		while(!q.empty()){
			int node=q.front();
			q.pop();
			cout<<"\t"<<node<<"\t";
			for(int i :l[node]){
				if(visited[i]==0){
					q.push(i);
					visited[i]=1;
				}

			}



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
	
	int src;
	cout<<endl<<"Enter the source node : ";
	cin>>src;
	cout<<"\nBFS Graph Traversal Order is :";
	G.bfs(src);

	

}