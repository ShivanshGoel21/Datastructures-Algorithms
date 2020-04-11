#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;

//post-order left,right,parent
void print(struct Node* head){
    if(head->left) print(head->left);
    if(head->right) print(head->right);
    printf("%d ",head->data);
}


//inserting in tree
void insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    if(head==NULL){
        head=temp;
    }

    else{
        struct Node* current=head;
        struct Node* parent;
        while(current){
            parent=current;
            if(current->data > temp->data){
                current=current->left;
            }

            else{
                current=current->right;
            }
        }

        if(parent->data > temp->data){
            parent->left=temp;
        }

        else{
            parent->right=temp;
        }
    }
}


int main(){
    int n,i,ele;
    head=NULL;
    printf("Enter number of elements to insert in BST:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    print(head);
}
