// implementation of doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;
struct Node* temp;

void create(int ele){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=ele;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(head==NULL){
        head=new_node;
        temp=head;
    }

    else{
        temp->next=new_node;
        new_node->prev=temp;
        temp=new_node;
    }
}

void print(){
    struct Node* node=head;
    while(node!=NULL){
        printf("%d ",node->data);
        node=node->next;
    }
}

int main(){
    head=NULL;
    temp=NULL;
    int i,n,ele;
    printf("Enter Number of Values to be inserted in D.L.L.:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        create(ele);
    }
    print();
    return 0;
}
