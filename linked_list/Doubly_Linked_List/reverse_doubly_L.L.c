void reverse(){
    struct Node* p=head;
    struct Node* temp=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->prev;
    }
}
