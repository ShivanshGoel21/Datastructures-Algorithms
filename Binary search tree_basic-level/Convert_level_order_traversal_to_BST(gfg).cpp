Node* insert(Node* head,int data){
    struct Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }
    else{
        Node* current=head;
        Node* parent;
        while(current){
            parent=current;
            if(current->data > temp->data) current=current->left;
            else current=current->right;
        }
        if(parent->data > temp->data) parent->left=temp;
        else parent->right=temp;
    }
    return head;
}

Node* constructBst(int arr[], int n)
{
    Node* head=(Node*)malloc(sizeof(Node));
    head=NULL;
    for(int i=0;i<n;i++) {
        head=insert(head,arr[i]);
    }
    return head;
}
