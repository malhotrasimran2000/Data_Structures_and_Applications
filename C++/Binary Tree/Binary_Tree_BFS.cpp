//Binary Tree - BFS Traversal

 #include<iostream>
 #include<queue>
 using namespace std;

 class node{

 public: 
 	int data;
 	node* left;
 	node* right;

 	node(int d){
 		data=d;
 		right=NULL;
 		left=NULL;
 	}
 };

 node* create(){
 	int val;
 	node* root=NULL;
 	cout<<"Enter the value of the node : ";
 	cin>>val;
 	if(val==-1){
 		return NULL;
 	}
 	root=new node(val);
 	root->left=create();
 	root->right=create();
 	return root;
 
 }

 
 void bfs(node*root){
 	queue<node*> q;

 	q.push(root);
 	q.push(NULL); 
 	while(!q.empty()){
 		
 		node*temp=q.front();
 		if(temp==NULL){
 			q.pop();
 			cout<<"\n";
 			if(!q.empty()){
 				q.push(NULL);
 			}
 		}
 		else{
	 		cout<<temp->data<<" ";
	 		q.pop();
	 		if(temp->left){
	 			q.push(temp->left);

	 		}
	 		if(temp->right){
	 			q.push(temp->right);
	 		}
 		}

 	}
 	return;

 }


 int main(){
 	node*root=create();
 	bfs(root);
 	
 }