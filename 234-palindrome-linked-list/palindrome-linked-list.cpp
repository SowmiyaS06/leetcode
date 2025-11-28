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
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *start=(fast ? slow->next : slow);
        ListNode * rev=reverseList(start);
        ListNode * left=head;
        ListNode *right=rev;
        while(right){
            if(left->val!=right->val){
                return false;
            }
            left=left->next;
            right=right->next;
        }
    return true;
    }
};