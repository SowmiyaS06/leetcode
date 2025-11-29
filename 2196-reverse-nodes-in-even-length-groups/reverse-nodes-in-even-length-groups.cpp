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
ListNode * reverseList(ListNode * head){
    ListNode * temp,*prev=NULL,*curr=head;
    while(curr){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *curr=head,*start=head,*prev=NULL;
        ListNode *temp,*rev;
        int count=1,i;
        while(curr){
            for(i=1;i<count&&curr;i++,curr=curr->next);
            if(curr==NULL) i=i-1;
            if(i%2==0){
                if(curr){
                    temp=curr->next;
                    curr->next=NULL;
                }
                else temp=NULL;
                rev=reverseList(start);
                if(prev) prev->next=rev;
                else head=rev;
                prev=start;
                start=curr=temp;
            }
            else{
                if(prev) prev->next=start;
                prev=curr;
                if(curr) start=curr=curr->next;
            }
            count++;
        }
        return head;
        
    }
};