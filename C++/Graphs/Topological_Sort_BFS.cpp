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



	void topological_sort(){
		int *indegree=new int[v];

		for(int i=0;i<v;i++){
			indegree[i]=0;

		}
		for(int i=0;i<v;i++){
			for(int nbr:l[i]){
				indegree[nbr]++;
			}
		}
		//bfs
		queue<int> q;
		//Step 1 :Find nodes with zero indegree
		for(int i=0;i<v;i++){
			if(indegree[i]==0){
				q.push(i);
			}
		}

		//Start removing elements from the queue
		while(!q.empty()){
			int node=q.front();
			q.pop();
			cout<<node<<"\t";
			for(int nbr:l[node]){
				indegree[nbr]--;
				if(indegree[nbr]==0){
					q.push(nbr);
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
	
	cout<<"\nTopological sort :";
	G.topological_sort();

	

}