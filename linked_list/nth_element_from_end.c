#include<stdio.h>
#include<stdlib.h>

//structure of node
struct Node{
	int data;
	struct Node* next;
};

//head pointer
struct Node* head;


//length of list from given node
int length(struct Node* root){
	struct Node* temp=root;
	int i=0;
	while(temp!=NULL){
		temp=temp->next;
		i++;
	}
	return i;
}


// finding nth node
int nth(int n){
	struct Node* temp=head;
	struct Node* p;
	int k;
	while(temp!=NULL){
		k=length(temp);
		if (k==n) return temp->data;
		temp=temp->next; 
	}
}

// printing node
void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

//forming linked list
void push(int x){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

//driver function
int main(){
	head=NULL;
	push(5);
	push(4);
	push(3);
	push(2);
	push(1);
	print();
	// rem();
	// print();
	printf("%d",nth(2));
	return 0;
}
