int findMaxForN(Node* root, int N,int size)
{
    int max=-1;
    struct Node* current=root;
    while(current){
        if(current->key<=N){
            max=current->key;
            current=current->right;
        }
        else current=current->left;
    }
    return max;
}
