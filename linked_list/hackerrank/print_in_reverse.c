int length(SinglyLinkedListNode* head){
    SinglyLinkedListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}

void print(SinglyLinkedListNode* head){
    SinglyLinkedListNode* temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* p=head;
    int tempo;
    int i=0,j=length(head)-1,k;
    while(i<j){
        k=i;
        while(k<j){
            k++;
            p=p->next;
        }
        tempo=temp->data;
        temp->data=p->data;
        p->data=tempo;
        temp=temp->next;
        p=temp;
        i++;
        j--;
    }
    print(head);
}
