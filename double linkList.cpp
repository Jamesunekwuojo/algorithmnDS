#include <bits/stdc++.h>
using namespace std;
class node {
	public:
		int data;
		node* nest;
		node* prev;
}


void push (node** head, int newdata){
	node* newnode = new node();
	newnode->data=newdata;
	newnode->prev=NULL;
	
	if((*head) !=NULL)
	(*head)->prev=newnode;
	(*head)=newnode
}

void insertafter(node* prevnode, int newdata){
	
	if(prevnode ==NULL)
}

int main () {
	
	
	
	return 0;
	
}