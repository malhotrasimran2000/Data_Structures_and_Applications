//Binary Tree -Level Order Traversal
 #include<iostream>
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
 int max(int a,int b){
 	return (a>b)?a:b;
 }

 int height(node* root){
 	if(root==NULL){
 		return 0;
 	}
 	int ls=height(root->left);
 	int rs=height(root->right);
 	return max(ls,rs)+1;
 }

void printKthlevel(node*root,int k){
	if(root==NULL){
		return;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printKthlevel(root->left,k-1);
	printKthlevel(root->right,k-1);
	return;
}

void printallLevels(node*root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		printKthlevel(root,i);
		cout<<"\n";
	}
	return;
}

 int main(){
 	node*root=create();
 	printallLevels(root);
 } 