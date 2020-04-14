void kl(Node* root, int &h,int k)
{
    if(!root || h>=k)
    return;
    kl(root->right,h,k);

    h++;
    if(h==k)
    cout<<root->key<<endl;
        kl(root->left,h,k);
    
}
void kthLargest(Node *root, int k)
{
  int h =0;
  kl(root,h,k);
}
