void length(SinglyLinkedListNode* head){
    int i=0;
    SinglyLinkedListNode* temp=head;
    while(temp!=NULL){
        i++;
        temp=temp->next;
    }
    return i;
}

SinglyLinkedListNode* insert_at_beg(SinglyLinkedListNode* head,int data){
SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
temp->data=data;
temp->next=head;
return temp;
}

SinglyLinkedListNode* insert_at_position(SinglyLinkedListNode* head,int data,int pos){
SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
SinglyLinkedListNode* p=head;
temp->data=data;
int i=1;
while(i!=pos){
    i++;
    p=p->next;
}
temp->next=p->next;
p->next=temp;
temp->data=data;
return head;
}

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
SinglyLinkedListNode* p=head;
temp->data=data;
if (position==0) return insert_at_beg(head,data);
else return insert_at_position(head,data,position);

}
