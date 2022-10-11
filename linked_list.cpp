#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node *next;
};
void printlinklist(Node* n){
	while(n!=NULL){
		cout<<n->value<<endl;
		n=n->next;
	}
	
}

int main(){
    //Defining node
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	Node* fourth=new Node();
	Node* fifth=new Node(); 
	
	// Assigning value
	head->value=5;
	second->value=2;
	third->value=23;
	fourth->value=8;
	fifth->value=12;
	
	//assigning address of next element
	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;
	printlinklist(head);
	

}
