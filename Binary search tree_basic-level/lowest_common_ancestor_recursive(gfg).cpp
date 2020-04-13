Node* LCA(Node *current, int n1, int n2)
{
   if((n1 >= current->data && n2 <= current->data) || (n1 <= current->data && n2 >= current->data))
    return current;
   if(n1 < current->data && n2 < current->data) LCA(current->left,n1,n2);
   else if(n1 > current->data && n2 > current->data) LCA(current->right,n1,n2);
   
}
