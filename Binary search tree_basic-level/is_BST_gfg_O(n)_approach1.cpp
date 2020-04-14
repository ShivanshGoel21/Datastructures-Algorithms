bool isbinary(Node* root,int min,int max){
    if(root==NULL) return true;
    return (root->data > min && root->data < max && isbinary(root->left,min,root->data) && isbinary(root->right,root->data,max));
}

bool isBST(Node* root) {
    return isbinary(root,INT_MIN,INT_MAX);
}

