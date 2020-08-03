//DIJKSTRA -Bidirectional Graph 
#include<iostream>
#include<list>
#include<set>

using namespace std;


class Graph{

	int v;
	list <pair <int,int> > *l;


public:
	Graph(int V){
		v=V;
		l=new list<pair <int,int> >[v];

	}


	void addEdges(int x,int y,int d){
		l[x].push_back(make_pair(y,d));
		l[y].push_back(make_pair(x,d));

	}

	void dijkstra(int src){
		int *dist=new int[v];
		
		for(int i=0;i<v;i++){
			dist[i]=INT_MAX;
		}
		dist[src]=0;

		set <pair <int,int> > s;

		s.insert(make_pair(0,src));
		while(!s.empty()){
			//Find the pair at the front

			auto p=*(s.begin());
			int node=p.second;
			int nodeDist=p.first; 
			s.erase(s.begin());

			//Iterate over the neighbours of the current node

			for(auto nbr:l[node]){
			if(nodeDist +nbr.second< dist[nbr.first]){
				int dest=nbr.first;

				//we have to remove the old pair and insert the new pair in order to update 
				//Removal
				auto f=s.find(make_pair(dist[dest],dest));
				if(f!=s.end()){
					s.erase(f);
				}

				//Insertion of new pair
				dist[dest]=nodeDist+nbr.second;
				s.insert(make_pair(dist[dest],dest));
			}
		}

		}

		for(int i=0;i<v;i++){
			cout<<"Distance between "<<src<<" and "<<i<<" is "<<dist[i]<<endl;
		}
		
		

	}
	


};


int main(){

	int n,e;
	cin>>n;
	cout<<"Enter the number of edges : ";
	cin>>e;
	int x,y,d;
	Graph G(n);
	for(int i=0;i<e;i++){
		cout<<endl<<"Insert edge between  :";
		cin>>x>>y;
		cout<<"Enter distance between the edge :";
		cin>>d;
		G.addEdges(x,y,d);
		
	}
	
	int src;
	cout<<endl<<"Enter the source node : ";
	cin>>src;
	cout<<"\nDijkstra's Algorithm :"<<endl;
	G.dijkstra(src);

}
