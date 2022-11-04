#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter size of an array";
	cin>>n;
	int* arr;
	arr=new int[n];
	for(int i=0; i<n;i++){
		cout<<"enter arr["<<i<<"]="<<endl;
		cin>>arr[i];
	}
	for(int i=0; i<n;i++){
		cout<<"arr["<<i<<"]="<<arr[i]<<endl;
	}
	
}
