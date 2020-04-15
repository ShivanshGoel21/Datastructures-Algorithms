Node* Min(struct Node* root){
    while(root->left!=NULL) root=root->left;
    return root;
}

Node *deleteNode(Node *root,  int data)
{
    if(root==NULL) return root;
    if(root->data > data) root->left=deleteNode(root->left,data);
    else if(root->data < data) root->right=deleteNode(root->right,data);
    else{
        if(root->left==NULL){
            struct Node* temp=root;
            root=root->right;
            delete(temp);
            return root;
        }
        else if(root->right==NULL){
            struct Node* temp=root;
            root=root->left;
            delete(root);
            return root;
        }
        else{
            struct Node* temp=Min(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
            return root;
        }
    }
}
