#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	 int row;
	 int col;
	 cin>>row;
	 cin>>col;
	int matrix[row][col];
	
	for(int i=0;i<row;i++){
		for(int j=0; j<col;j++){
			cout<<"enter Matrix["<<i+1<<"]["<<j+1<<"]"<<endl;
			cin>>matrix[i][j];
		}
	}
	
		for(int i=0;i<row;i++){
			cout<<endl;
			for(int j=0; j<col;j++){
				//cout<<"Matrix["<<i+1<<"]["<<j+1<<"]="<<matrix[i][j];
				cout<<matrix[i][j]<<"\t";
		}
	}
}
