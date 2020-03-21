/// c program to insert a form a linked list
#include<stdio.h>
#include<stdlib.h>

//structure of a node
struct Node{
    int data;
    struct Node* next;
};


struct Node* head;

//forming a linked list(inserting at node)
void insert(int ele){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->next=head;
    temp->data=ele;
    head=temp;
}

//printing linked list
void print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

// check if a linked list is sorted
int isSorted(){
    struct Node* temp=head;
    struct Node* p;
    while(temp!=NULL){
        if(temp->data <= temp->next->data){
            // printf("%d %d\n",temp->data,p->data);
            temp=temp->next;
            return 0;
        }
    return 1;
}
}

// driver function
int main(){
    int k;
    head=NULL;
    int n,i,ele,in,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    print();
    printf("\n");
    k=isSorted();
    if (k) printf("Sorted LL");
    else printf("Not Sorted");
    return 0;
}
