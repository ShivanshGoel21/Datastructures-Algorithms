// A wrapper over leftViewUtil()
void leftView(Node *root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    if(root->left) leftView(root->left);
    else if(root->right) leftView(root->right);
}
