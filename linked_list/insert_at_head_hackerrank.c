SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
temp->data=data;
temp->next=llist;
return temp;
}
