// detect loop from linked list
void detectloop(struct Node* head){
    struct Node* slow=head;
    struct Node* fast=head;
    while(slow && fast && fast->next){
        slow=slow->next;  // move this pointer by one pointer
        fast=fast->next->next;  //move by two pointers
        if (slow==fast) return 1;  // loop detected
    }
    return 0; //loop not detected
}
