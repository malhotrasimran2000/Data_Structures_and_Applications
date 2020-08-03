//Binary Tree -Diameter of tree
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

	int diameter(node*root){
		 if(root==NULL){
		 	return 0;
		 }
		 int h1=height(root->left);
		 int h2=height(root->right);

		 int op1=h1+h2;
		 int op2=diameter(root->left);
		 int op3=diameter(root->right);

		 return max(op1,max(op2,op3));

	}

	 int main(){
	 	node*root=create();
	 	cout<<"Diamater = "<<diameter(root);
	 	cout<<endl;
	 } 