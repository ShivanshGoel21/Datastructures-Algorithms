#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;

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

// according to pricipal of BST, elements greater than parent will be on right and lesser will be on left
int maximum(){
    int max=0;
    struct Node* current=head;
    while(current){
        if(current->data > max){
            max=current->data;
            current=current->right;
        }
        else current=current->right;
    }
    return max;
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
    printf("Max is: %d\n",maximum());
}
