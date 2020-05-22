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
    ListNode* newhead=NULL;
    ListNode* current=NULL;
    void merge_my_lists(ListNode* headl1,ListNode* headl2){
        if(headl1==NULL){
            if(newhead==NULL){
                newhead=headl2;
                current=headl2;
            }
            else current->next=headl2;
            return;
        }
        else if(headl2==NULL){
            if(newhead==NULL){
                newhead=headl1;
                current=headl1;
            }
            else current->next=headl1;
            return;
        }
        else if(headl1->val <= headl2->val){
            if(newhead==NULL){ 
                newhead=headl1;
                current=headl1;
                merge_my_lists(headl1->next,headl2);
            }
            else{
                current->next=headl1;
                current=headl1;
                merge_my_lists(headl1->next,headl2);
            }
        }
        else{
            if(newhead==NULL){ 
                newhead=headl2;
                current=headl2;
                merge_my_lists(headl1,headl2->next);
            }
            else{
                current->next=headl2;
                current=headl2;
                merge_my_lists(headl1,headl2->next);
            }
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        merge_my_lists(l1,l2);
        return newhead;
    }
};
