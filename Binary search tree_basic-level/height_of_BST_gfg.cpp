/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

/* Computes the height of binary tree with given root.  */
int max(int a,int b){
    if(a>=b) return a;
    else return b;
}

int height(Node* node)
{
   if(node==NULL) return 0;
   return max(height(node->left),height(node->right))+1;
}
