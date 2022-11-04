#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
struct node{
	int value;
	struct node *next;
};

int main(){
	struct node *head;
	struct node *first=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	
	
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));	 
	first->value=1;
	second->value=3;
	third->value=5;
	
	first->next= second;
	second->next=third;
	third->next=NULL;
	
	head=first;
}
