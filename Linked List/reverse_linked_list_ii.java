// Reverse a linked list from position m to n. Do it in-place and in one-pass.
// For example:
// Given 1->2->3->4->5->NULL, m = 2 and n = 4,
// return 1->4->3->2->5->NULL.

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public static ListNode reverseLL(ListNode a){
        ListNode curr = a,prev=null,next;
        while(curr!=null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        a = prev;
        return a;
    }
    public ListNode reverseBetween(ListNode A, int B, int C) {
        if(A == null) return null;
        if(B == C) return A;
        ListNode fhead = new ListNode(-1);
        fhead.next = A;
        ListNode start=fhead,temp = A,revstart = null;
        ListNode revll, endstart=null;
        
        int k=1;
        
        while(k<B){
            start = temp;
            temp = temp.next;
            k++;
        }
        
        ListNode curr = temp,prev=null,next;
        while(k<=C){
            next = temp.next;
            temp.next = prev;
            prev = temp;
            temp = next;
            k++;
        }
        start.next = prev;
        curr.next = temp;
        return fhead.next;
    }
}
