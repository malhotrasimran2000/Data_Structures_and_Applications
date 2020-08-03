//Cycle Detection in a Directed Graph 
//We need to look for the presence of a back edge(a vertex that appears twice in the current path)


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
	bool helper(int src,int *visited,int *stack){
		//visit a node
		visited[src]=1;
		stack[src]=1;
		
		for(int i:l[src]){
			//Back edge case 
			if(stack[i]==1){
				return true;
			}

			else if(!visited[i]){
				bool flag=helper(i,visited,stack); // cycle mila kya 
			//Backtracking
			   if(flag==true){
					return true;
				}
			}
		}
		//leave a node
		stack[src]=0;
		return false;

	}

	bool contains_cycle(int src){
		int *visited=new int[v];
		int *stack=new int[v];  //boolean
		for(int i=0;i<v;i++){
			visited[i]=0;
			stack[i]=0;
		}
		
		return helper(src,visited,stack);
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