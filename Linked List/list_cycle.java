// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
// Try solving it using constant additional space.

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode A) {
        ListNode fastp = A, slowp = A;
        if(A == null || A.next == null) return null;
        boolean loopfound = false;
        while(slowp!=null && fastp!=null){
            if(fastp.next == null) return null;
            slowp = slowp.next;
            fastp = fastp.next.next;
            if(slowp == fastp){
                loopfound = true;
                break;
            }
        }
        if(slowp == null || fastp == null) return null;
        if(loopfound == false) return null;
        else{
            int nodesInLoop = 1;
            while(slowp.next != fastp){
                slowp = slowp.next;
                nodesInLoop++;
            }
            ListNode first = A;
            ListNode second = A;
            for(int i=0;i<nodesInLoop;i++){
                second = second.next;
            }
            while(first != second){
                first = first.next;
                second = second.next;
            }
            return first;
        }
    }
}
