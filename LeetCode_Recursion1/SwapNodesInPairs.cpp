/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapmyPairs(struct ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        struct ListNode* temp;
        struct ListNode* nextlistptr;
        nextlistptr=head->next->next;
        temp=head;
        head=head->next;
        head->next=temp;
        head->next->next=swapmyPairs(nextlistptr);
        return head;
        
    }
    ListNode* swapPairs(ListNode* head) {
        struct ListNode* temp=swapmyPairs(head); // new head
        return temp;
        }
    
};
