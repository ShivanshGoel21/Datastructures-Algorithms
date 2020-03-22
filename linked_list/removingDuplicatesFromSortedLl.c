// removing duplicates from a linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

//forming a linked list
void push(int ele){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->next=head;
        temp->data=ele;
        head=temp;
}

// printing linked list
void print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

//removing dulicates from a sored linked list
void duplicates(){
    struct Node* temp=head;
    struct Node* p=temp->next;
    while(p!=NULL){
        if(temp->data==p->data){
            temp->next=p->next;
        free(p);
        p=temp->next;
        }
        else{
            temp=p;
            p=p->next;
        }
    }
}

int main(){
    head=NULL;
    int i,ele;
    for(i=0;i<5;i++){
        scanf("%d",&ele);
        push(ele);
    }
    print();
    printf("\n");
    duplicates();
    print();
    return 0;
}
