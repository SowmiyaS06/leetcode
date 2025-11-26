/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode curr=head,prev=null;
        int c=0;
        while(curr!=null){
            c++;
            curr=curr.next;
        }
        n=c-n;
        curr=head;
        while(n>0){
            n--;
            prev=curr;
            curr=curr.next;
        }
        if(prev!=null)prev.next=curr.next;
        else head=curr.next;
        return head;
    }
}