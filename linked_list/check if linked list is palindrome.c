int len(struct Node* head){
    struct Node* temp=head;
    int i=0;
    while(temp!=NULL){
        temp=temp->next;
        i++;
    }
    return i;
}

bool isPalindrome(Node *head)
{
    //Your code here
    struct Node* temp=head;
    int i=0;
    int j=len(head);
    int k;
    while(i<j){
        struct Node* p=temp;
        k=i;
        while(k<j-1){
            p=p->next;
            k++;
        }
        if(p->data==temp->data){
            j--;
            i++;
            temp=temp->next;
        }
        else return false;
    }
    return true;
}
