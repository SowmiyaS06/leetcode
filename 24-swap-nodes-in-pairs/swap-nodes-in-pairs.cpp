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
ListNode* reverseList(ListNode* head) {
        ListNode *curr=head,*temp,*newHead=NULL;
        while(curr){
            temp=curr->next;
            curr->next=newHead;
            newHead=curr;
            curr=temp;
        }
        return newHead;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr=head,*prev = NULL,*temp=NULL,*start=head;
        int count =1;
        while(curr){
            if(count%2==0){
                temp=curr->next;
                curr->next=NULL;
                ListNode * rev=reverseList(start);
                if(prev) prev->next=rev;
                else head=rev;
                prev=start;
                start=curr=temp;

            }
            else
                curr=curr->next;
            count++;
        }
        if(temp)prev->next=temp;
        return head;
    }
};