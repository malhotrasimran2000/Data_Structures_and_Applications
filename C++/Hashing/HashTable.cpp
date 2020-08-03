#include<iostream>
#include<string>

using namespace std;

class node{

public:
		string key;
		int value;
		node *next;

		node(string key,int v){
			this->key=key;
			value=v;
			next=NULL;

		}

		~node(){
			if(next!=NULL){
				delete next;
			}
		}
};

class HashTable{
	node **table;
	int table_size;
	int current_size;

	int HashFunc(string key){
		int idx=0;
		int p=1;
		for(int j=0;j<key.length();j++){
			idx = idx + (key[j]*p)%table_size;
			idx = idx%table_size;
			p=(p*27)%table_size;

		}
		return idx;

	}

	void rehash(){
		node **oldtable=table;
		int old_size=table_size;
		table_size=2*table_size;
		table=new node*[table_size];

		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}
		current_size=0;

		//Shift the elements from old table to new table
		for(int i=0;i<old_size;i++){
			node *temp=oldtable[i];
			while(temp!=NULL){
				insert(temp->key,temp->value);
				temp=temp->next;
			}
			if(oldtable[i]!=NULL){
				delete oldtable[i];

			}
			

		}
		delete [] oldtable;
		//print();
		
	}

public:

	HashTable(int size=7){
		table_size=size;
		table=new node*[table_size];
		current_size=0; 
		for(int i=0;i<table_size;i++){
			table[i]=NULL;

		}
	}

public:

	void insert(string key,int value){
		int idx=HashFunc(key);
		node *n= new node(key,value);
		//Insert at the head 
		n->next=table[idx];
		table[idx]=n;
		current_size++;

		//rehash....
		float load_factor=current_size/(1.0*table_size);
		if(load_factor>0.7){
			rehash();
			
		}
		


	}

	void print(){
		for(int i=0;i<table_size;i++){
			cout<<"Bucket "<<i<<"-->";
			node *temp=table[i];
			while(temp!=NULL){
				cout<<"("<<temp->key<<","<<temp->value<<")"<<"->";
				temp=temp->next;
			}
			cout<<endl;
		}

	}


	void remove(string key){
		int idx=HashFunc(key);
		node *temp=table[idx];
		node* prev=NULL;
		if(temp->key==key){
			table[idx]=NULL;
			delete temp;
			return;
		}
		while(temp->key!=key || temp!=NULL){
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		delete temp;

	}

	int search(string key){
		int idx=HashFunc(key);
		
		node *temp=table[idx];
		while(temp!=NULL){
			if(temp->key==key){
				return temp->value;
			}
			temp=temp->next;
		}
		return -1;
		

	}
};


int main(){
	HashTable H;
	H.insert("Burger",120);
	H.insert("Pepsi",20);
	H.insert("BurgerPizza",150);
	H.insert("Noodles",25);
	H.insert("Coke",40);
	H.insert("Chips",20);
	cout<<H.search("Noodles");
	H.print();
	H.remove("Pepsi");
	H.print();





}