/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


// when slow and fast meets again then using one of these pointer count the number of nodes in that loop by travesring again through the loop


int countlength(struct Node* slow){
    struct Node* temp=slow;
    int res=1;
    while(temp->next!=slow){
        res++;
        temp=temp->next;
    }
    return res;
}

int countNodesinLoop(struct Node *head)
{
     // Code here
     struct Node* slow=head;
     struct Node* fast=head;
     while(slow && fast && fast->next){
         slow=slow->next;
         fast=fast->next->next;
         if(slow==fast){
             return (countlength(slow));
         }
         
     }
     return 0;
}
