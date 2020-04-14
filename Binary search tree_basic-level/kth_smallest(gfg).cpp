void inorder(Node* root,int k,int &i,int &ans){
    if(root==NULL || k==i) return;
    inorder(root->left,k,i,ans);
    i++;
    if(k==i) ans=root->data;
    inorder(root->right,k,i,ans);
}
int KthSmallestElement(Node *root, int k)
{
    int i=0;
    int ans=-1;
    inorder(root,k,i,ans);
    return ans;
}
