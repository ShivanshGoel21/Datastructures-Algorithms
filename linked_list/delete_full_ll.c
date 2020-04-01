#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

//deleting linked list
void delete(){
    struct Node* temp=head;
    struct Node* current=temp;
    while(temp->next!=NULL){
        temp=current->next;
        free(current);
        current=temp;
    }
    free(temp);
    head=NULL;
}

//printing ll
void print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nLinked list Printing completed\n");
}

//forming linked list
void push(int x){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=head;
    head=temp;
}

int main(){
    head=NULL;
    push(3);
    push(5);
    push(6);
    print();
    delete();
    print();
    return 0;
}
