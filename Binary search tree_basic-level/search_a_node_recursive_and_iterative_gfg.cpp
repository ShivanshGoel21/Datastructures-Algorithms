//recursive

bool search(Node* root, int data)
{
    if(root==NULL) return false;
    if(root->data==data) return true;
    if(root->data < data) search(root->right,data);
    else if(root->data > data) search(root->left,data);
}

//iterative
bool search(node* root, int x)
{

while(root!=NULL){

if(x==root->data)return true;

if(root->data>x){
root=root->left;
}else{
root=root->right;
}

}

return false;
}
