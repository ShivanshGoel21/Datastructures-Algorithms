/// linked_list-> inser_in_ll,form_ll,display_ll
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

//inserting in a linked list
void push(int ele,int position){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2=head;
    int i;
    if (position==1){
        temp->next=head;
        temp->data=ele;
        head=temp;
    }
    else{
        for(i=1;i<position;i++){
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
        temp->data=ele;
    }
}

//printing linked list
void print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

// driver function
int main(){
    head=NULL;
    int n,i,ele,in,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    print();
    printf("\n");
    printf("Enter a element to insert in linked list followed by position:")
    scanf("%d%s",in,p);
    push(in,p);
    print();
}
