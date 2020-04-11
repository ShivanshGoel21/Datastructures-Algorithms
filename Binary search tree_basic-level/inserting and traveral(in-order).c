#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;


//inserting elements to BST
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
            if(temp->data > current->data){
                current=current->right;
            }
            else{
                current=current->left;
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

//inorder traversal of BST
//all the elements are printed in ascending order
void print(struct Node* t){
    if(t->left) print(t->left);
    printf("%d ",t->data);
    if(t->right) print(t->right);
}

int main(){
    head=NULL;
    int i,ele,n;
    printf("Enter no. of elements to insert in BST:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ele);
        insert(ele);
    }
    print(head);
	return 0;
}
