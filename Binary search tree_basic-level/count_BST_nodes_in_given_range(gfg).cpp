void inorder(Node* root,int l,int h,int &count){
    if (root){
        inorder(root->left,l,h,count);
        if(root->data >= l && root->data <= h) count++;
        inorder(root->right,l,h,count);
    }
}


int getCountOfNode(Node *root, int l, int h)
{
    int count=0;
    inorder(root,l,h,count);
    return count;
}
