
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
SinglyLinkedListNode* temp=head;
SinglyLinkedListNode* p=head;
int i=0,j=length(head)-1,k,tempo;
while(i<j){
    k=i;
    while(k<j){
        p=p->next;
        k++;
    }
    tempo=temp->data;
    temp->data=p->data;
    p->data=tempo;
    temp=temp->next;
    p=temp;
    i++;
    j--;
}
return head;

}
