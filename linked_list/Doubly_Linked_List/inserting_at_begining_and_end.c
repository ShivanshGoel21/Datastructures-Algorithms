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
    printf("\n");
}

int length(){
    struct Node* t=head;
    int len=0;
    while(t!=NULL){
        len++;
        t=t->next;
    }
    printf("Length of D.L.L is:%d\n",len);
    return len;
}

void insert_at_begining(int ele){
    printf("Inserting at begining\n");
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->data=ele;
    t->next=NULL;
    t->prev=NULL;
    t->next=head;
    head->prev=t;
    head=t;
}

void insert_at_end(int ele){
    printf("Inserting at end\n");
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->data=ele;
    t->next=NULL;
    t->prev=NULL;
    struct Node* p=head;
    while(p->next!=NULL) p=p->next;
    p->next=t;
    t->prev=p;
}




void insert(int ele,int pos){
    printf("Inserting\n");
    if(pos<0 || pos>length()) printf("Invalid Position!!");
    else{
        if(pos==0) insert_at_begining(ele);
        else if(pos==length()) insert_at_end(ele);
    }
}


int main(){
    head=NULL;
    temp=NULL;
    int i,n,ele,pos;
    printf("Enter Number of Values to be inserted in D.L.L.:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        create(ele);
    }
    print();
    printf("Element to be inserted and position:");
    scanf("%d%d",&ele,&pos);
    insert(ele,pos);
    print();
    return 0;
}
