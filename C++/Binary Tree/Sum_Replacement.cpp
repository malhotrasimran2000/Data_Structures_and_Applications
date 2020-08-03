//Binary Tree
 #include<iostream>
 #include<queue>
 using namespace std;

 class node{

 public:
 		int data;
 		node *left;
 		node *right;

 		node(int d){
 			data=d;
 			left=NULL;
 			right=NULL;
 		}
 };

 node* create(){
 	int val;
 	node *root=NULL;
 	cout<<"Enter a value :";
 	cin>>val;
 	if(val==-1){
 		return NULL;
 	}
 	root=new node(val);
 	cout<<"\nEnter the value of left child:";
 	root->left=create();
 	cout<<"\nEnter the value of right child:";
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

int replace_sum(node *root){

	if(root==NULL){
		return 0;
	}
	if(root->left==NULL && root->right==NULL){
		return root->data;
	}
	
	//Postorder Traversal
	if(root!=NULL){
		int leftSum= replace_sum(root->left);
		int rightSum=replace_sum(root->right);
		
		int temp=root->data;
		root->data=leftSum + rightSum;

		return temp+root->data;

	}
}


 int main(){
 	node *root=NULL;
 	root=create();
 	bfs(root);
 	cout<<endl;
 	replace_sum(root);
 	bfs(root);


 }