#include<iostream>
using namespace std;
#include<queue>


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* head;


//breath first -> levelorder traversal
//depth first -> inorder,preorder,postorder

void levelTraversal(){
    queue<struct Node*> q;
    q.push(head);
    while(!q.empty()){
        cout<<q.front()->data<<" ";
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()-> right) q.push(q.front()->right);
        q.pop();
    }
}

void insert(int data){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;

    if (head==NULL) head=temp;
    else{
        struct Node* current=head;
        struct Node* parent;
        while(current){
            parent=current;
            if(current->data > temp->data) current=current->left;
            else current=current->right;
        }
        if(parent->data > temp->data) parent->left=temp;
        else parent->right=temp;
    }
}

int main(){
    head=NULL;
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insert(ele);
    }
    levelTraversal();
    return 0;
}
