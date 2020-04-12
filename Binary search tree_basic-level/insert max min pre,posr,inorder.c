#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;
//  inorder-> left,parent,right using recursion
void inorder(struct Node* current){
    if(current->left) inorder(current->left);
    printf("%d ",current->data);
    if(current->right) inorder(current->right);
}

// preorder-> parent,left,right
void postorder(struct Node* current){
    printf("%d ",current->data);
    if(current->left) postorder(current->left);
    if(current->right) postorder(current->right);
}

// preorder-> left,right,parent
void preorder(struct Node* current){
    if(current->left) preorder(current->left);
    if(current->right) preorder(current->right);
    printf("%d ",current->data);
}



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
            else current=current->right;
        }
        if(parent->data > temp->data) parent->left=temp;
        else parent->right=temp;
    }
}

//minimum using recursion
int minimum(struct Node* current){
    if(current->left) minimum(current->left);
    else return current->data;
}

//maximum using recursion
int maximum(struct Node* current){
    if(current->right) maximum(current->right);
    else return current->data;
}


int main(){
    int n,i,ele;
    head=NULL;
    printf("Enter number of elements to insert in a bst:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    printf("Inserting, Done\n");
    printf("Inorder Printing:-  ");
    inorder(head);
    printf("\nPostorder Printing:-  ");
    postorder(head);
    printf("\nPreorder printing:-  ");
    preorder(head);
    printf("\nMinimum is: %d",minimum(head));
    printf("\nMaximum is: %d",maximum(head));
    return 0;
}
