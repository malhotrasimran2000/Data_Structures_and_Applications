#include<iostream>
#include<list>



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
		;
		int distance[10];
		for(int i=0;i<v;i++){
			distance[i]=INT_MAX;
		}
		distance[src]=0;
		queue<int> q;
		q.push(src);
		
		while(!q.empty()){
			int node=q.front();
			q.pop();
			
			for(int i :l[node]){
				if(distance[i]==INT_MAX){
					q.push(i);
					distance[i]=distance[node]+1;
				}

			}

		}

	//Print the shortest distance to every node
		for(int i=0;i<v;i++){
			cout<<endl<<"Distance of "<<i<<" from "<<src<<"  : "<<distance[i];
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
	
	G.bfs(src);

	

}