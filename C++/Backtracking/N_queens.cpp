	#include<iostream>
		
	using namespace std;


	bool is_safe(int chess[][10],int i,int j,int n){
		//Checking for column
		for(int row=0;row<i;row++){
			if(chess[row][j]==1)
				return false;
		}
		int x=i;
		int y=j;
		//Checking for left diagonal
		while(x>=0 && y>=0){
			if(chess[x][y]==1)
				return false;
			x--;
			y--;
		}
		x=i;
		y=j;
		//Checking for right diagonal 
		while(x>=0 && y<n){
			if(chess[x][y]==1)
				return false;
			x--;
			y++;

		}
		return true;
	}


	bool n_queens(int chess[][10],int i,int n){

		//Base Case
		if(i==n){
			//You have successfully placed all queens in n rows (0...n-1)
			//Print current configuration
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(chess[i][j]==1){
						cout<<"Q";
					}
					else{
						cout<<"_";
					}
				}
				cout<<endl;
			}
			cout<<endl<<endl;
			return false;  //return true - - will give only one configuration
		}


		//Recursive Case
		//Try to place the queen in the current row and call on the remaining part
		for(int j=0;j<n;j++){
			//Check if i,j position is safe
			if(is_safe(chess,i,j,n)){
				//Place the queen assuming i,j is the right position
				chess[i][j]=1;
				bool next_queen=n_queens(chess,i+1,n); //Are we able to place the next queen
				if(next_queen){
					return true;

				}
			//Means i,j is not the right position -Assumption Wrong
				chess[i][j]=0; //Backtracking
				
			}

		}
		//You have tried for all positions in the current row but could not place the queen 
		return false;

	}





	int main(){
		int chess[10][10]={0};
		int n;
		cin>>n;
		n_queens(chess,0,n);
	}