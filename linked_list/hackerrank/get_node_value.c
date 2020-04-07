int length(SinglyLinkedListNode* head){
    SinglyLinkedListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        
        if(i==(length(head))-positionFromTail-1){
            return temp->data;
        }
        else{
            temp=temp->next;
            i++;
        }
    }
    return 0;
}
