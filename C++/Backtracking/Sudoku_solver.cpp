#include<iostream>
#include<math.h>
using namespace std;

bool check(int matrix[][10],int i,int j,int n,int number){
	//Check for the number in same row or column
	for(int k=0;k<n;k++){
		if(matrix[k][j]==number || matrix[i][k]==number){
			return false;
		}
	}
	int rn=sqrt(n);
	int sx=(i/rn)*rn;
	int sy=(j/rn)*rn;

	for(int i=sx;i<sx+rn;i++){
		for(int j=sy;j<sy+rn;j++){
			if(matrix[i][j]==number)
				return false;
		}
	}

	return true;

}

bool solve_sudoku(int matrix[][10],int i,int j,int n){

	//Base Case
	if (i==n)
	{
	//Print the sudoku
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<matrix[i][j]<<"\t";
			}
			cout<<endl;
		}
		return true;
	}
	

	//Case row end
	if(j==n){
		return solve_sudoku(matrix,i+1,0,n);
	}
	//Skip the already filled cells
    if(matrix[i][j]!=0){
    	return solve_sudoku(matrix,i,j+1,n);
    }

    //Recursive case 
    for(int number=1;number<=9;number++){
    	if(check(matrix,i,j,n,number)){
    		matrix[i][j]=number;

    		bool couldweSolve=solve_sudoku(matrix,i,j+1,n);
    		if(couldweSolve)
    			return true;
    	}
    	
    }
    //Backtracking
    matrix[i][j]=0;
    return false;

}


int main(){
	
	int matrix[10][10]={
						{5,3,0,0,7,0,0,0,0},
						{6,0,0,1,9,5,0,0,0},
						{0,9,8,0,0,0,0,6,0},
						{8,0,0,0,6,0,0,0,3},
						{4,0,0,8,0,3,0,0,1},
						{7,0,0,0,2,0,0,0,6},
						{0,6,0,0,0,0,2,8,0},
						{0,0,0,4,1,9,0,0,5},
						{0,0,0,0,8,0,0,7,9}

	};
	solve_sudoku(matrix,0,0,9);
}