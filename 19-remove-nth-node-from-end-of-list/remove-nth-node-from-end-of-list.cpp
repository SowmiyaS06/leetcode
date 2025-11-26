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
        int count=0;
        ListNode *curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        n=count-n;
        curr=head;
        ListNode *prev=NULL;
        while(n>0){
            n--;
            prev=curr;
            curr=curr->next;
        }
        if(prev) prev->next=curr->next;
        else head=curr->next;
        return head;
    }
};