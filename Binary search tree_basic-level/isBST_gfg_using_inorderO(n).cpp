bool inorder(Node* root,int &prev,bool &ans){
    if(root==NULL || ans==false) return ans;
    inorder(root->left,prev,ans);
    if(root->data > prev){
        prev=root->data;
        ans=true;
    }
    else ans=false;
    inorder(root->right,prev,ans);
}

bool isBST(Node* root) {
    int prev=0;
    bool ans=true;
    inorder(root,prev,ans);
    return ans;
}
