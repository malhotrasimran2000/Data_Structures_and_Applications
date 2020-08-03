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
}

