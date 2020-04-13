Node* insert(Node* node, int data)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    if(node==NULL) node=temp;
    else{
        Node* current=node;
        Node* parent;
        while(current){
            
            parent=current;
            if(current->data > temp->data) current=current->left;
            else current=current->right;
        }
        if(parent->data > temp->data) parent->left=temp;
        else if(parent->data < temp->data) parent->right=temp;
    }
     return node;
}
