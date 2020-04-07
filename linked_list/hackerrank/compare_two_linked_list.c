int length(SinglyLinkedListNode* head){
    SinglyLinkedListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}


bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* first=head1;
    SinglyLinkedListNode* second=head2;
    if(length(head1)==length(head2)){
        while(first!=NULL && second!=NULL){
            if(first->data==second->data){
                 first=first->next;
                 second=second->next;
                 continue;
            }
            else return false;
        }
        return true;
    }
    else return false;
}
