//Binary Tree
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


 void preorder(node* root){
 	if(root!=NULL){
 		cout<<root->data<<"->";
 		preorder(root->left);
 		preorder(root->right);
 	}
 	
 }
  void inorder(node* root){
  	
 	if(root!=NULL){
 		inorder(root->left);
 		cout<<root->data<<"->";
 		inorder(root->right);
 	}
 	
 	
 }
  void postorder(node* root){
 	if(root!=NULL){
 		postorder(root->left);
 		postorder(root->right);
 		cout<<root->data<<"->";
 	}
 	
 }


 int main(){
 	node*root=create();
 	inorder(root);
 }