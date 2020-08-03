
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

 int search(node *root,int key,int level){
 	if(root==NULL){
 		return -1;
 	}
 	if(root->data==key){
 		return level;
 	 }
 	int l=search(root->left,key,level+1);
 	return (l!=-1)?l:search(root->right,key,level+1);


}



 
 node *lca(node *root,int a,int b){
 	if(root==NULL){
 		return NULL;
 	}
 	if(root->data==a || root->data==b){
 		return root;
 	}

 	//Search in left and right subtrees
 	node* leftAns=lca(root->left,a,b);
 	node* rightAns=lca(root->right,a,b);

 	if(leftAns!= NULL && rightAns!=NULL){
 		return root;
 	}

 	if(leftAns!= NULL){
 		return leftAns;
 	}

 	return rightAns;


 }


 int main(){
 	node*root=create();
 	preorder(root);
 	int a,b;
 	cin>>a>>b;
 	node* ans=lca(root,a,b);

 	int l1=search(root,ans->data,0);
 	int l2=search(root,a,0);
 	int l3=search(root,b,0);
 	cout<<l2+l3-(2*l1);

 	 }