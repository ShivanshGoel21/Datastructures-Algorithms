class Solution {
public:
    ListNode* oldHead;
    ListNode* reversing(ListNode* node){
        if(node==NULL) return node;
        if(node->next==NULL){
            oldHead=node;
            return node;
        }
        ListNode* temp=reversing(node->next);
        temp->next=node;
        node->next=NULL;
        return node;
        
    }
    ListNode* reverseList(ListNode* head) {
            oldHead=head;
            reversing(head);
            return oldHead;
    }
};
