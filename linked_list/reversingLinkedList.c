#include<stdio.h>
#include<stdlib.h>

// structure of node
struct Node{
    int data;
    struct Node* next;
};

// head pointer to linked-list
struct Node* head;

// forming a linked list
void push(int x){
    struct Node* temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}

// printing linked-list
void print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


// length of linked list
int length(){
    struct Node* temp=head;
    int i=0;
    while(temp!=NULL){
        temp=temp->next;
        i++;
    }
    return i;
}

// reversing a linked list
void reverse(){
    struct Node* start=head;
    struct Node* end=head;
    int i=1,j=length(),k,temp;
    while(i<j){
        k=i;
        while(k<j){
            k++;
            end=end->next;
        }
        temp=end->data;
        end->data=start->data;
        start->data=temp;
        end=start->next;
        start=start->next;
        i++;
        j--;
    }
}

int main(){
    head=NULL;
    int n,i,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&ele);
        push(ele);
    }
    print();
    reverse();
    printf("\n");
    print();
    return 0;
}
