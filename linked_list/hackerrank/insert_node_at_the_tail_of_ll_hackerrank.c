SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
SinglyLinkedListNode* p=head;
if(head==NULL){
    temp->data=data;
    temp->next=NULL;
    return temp;
}

else{
    while(p->next!=NULL){
        p=p->next;
    }
    temp->data=data;
    temp->next=NULL;
    p->next=temp;
    return head;
}    
}
