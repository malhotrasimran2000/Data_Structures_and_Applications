//Binary Search Tree -Insertion 

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

node* insertBST(node*root,int val){
	
	node*n=new node(val);
	//Base Case
	if(root==NULL){
		return n;
	}

	//Recursive Case
	if(val<=root->data){
		root->left=insertBST(root->left,val);
	}
	else{
		root->right=insertBST(root->right,val);;
	}
	return root;

}

node* build(){
	int val;
	cout<<"Enter value for root node:\n";
	cin>>val;
	node*root=NULL;
	while(val!=-1){
		root=insertBST(root,val);
		cout<<"\nEnter value : ";
		cin>>val;
	}
	return root;

}

node* deleteInBST(node*root,int data){
	if(root==NULL){
		return NULL;
	}
	else if(root->data<data){
		root->left=deleteInBST(root->left,data);
		return root;
	}
	else if(root->data==data){
	//Found the node to delete (3 cases)
	//1.Node to be deleted is the leaf node
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}

	//2.Node to be deleted has one child 
		if(root->left==NULL && root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
			}

		if(root->left!=NULL && root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;
			}
	
	//3.Node to be deleted has two children
		if(root->left!=NULL && root->right!=NULL){
			node *replace=root->right;
			
			while(replace->left!=NULL){
				replace=replace->left;
			}
			root->data=replace->data;
			root->right=deleteInBST(root->right,replace->data);

			return root;
			
		}
	else{
		root->right=deleteInBST(root->right,data);
		return root;

	}

}

 void inorder(node* root){
 	if(root!=NULL){
 		
 		inorder(root->left);
 		cout<<root->data<<"->";
 		inorder(root->right);
 	}
 	
 }

int main(){
	node*root=build();
	inorder(root);
	cout<<"\n";
	if(search(root,10)){
		cout<<"ELement found";
	}
	else
		cout<<"ELement not found";
	cout<<"\n";

}

