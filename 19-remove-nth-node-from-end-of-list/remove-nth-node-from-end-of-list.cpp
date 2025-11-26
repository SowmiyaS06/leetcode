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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *second=head,*first=head,*prev=NULL;
        while(n > 1){
            n--;
            second=second->next;
        }
        while(second!=NULL&&second->next!=NULL){
            prev=first;
            first=first->next;
            second=second->next;
        }
        if(prev) prev->next=first->next;
        else head=first->next;
        return head;
    }
};