// Sort a linked list using insertion sort.

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode insertionSortList(ListNode A) {
        if(A == null || A.next == null) return A;
        ListNode sorted = null;
        ListNode ls = A;
        while(ls != null){
            ListNode current = ls;
            ls = ls.next;
            if(sorted == null || sorted.val >= current.val){
                current.next = sorted;
                sorted = current;
            }
            else{
                ListNode temp = sorted;
                while(temp != null){
                    ListNode temp2 = temp;
                    temp = temp.next;
                    if(temp2.next == null || temp2.next.val > current.val){
                        current.next = temp2.next;
                        temp2.next = current;
                        break;
                    }
                }
            }
        }
        return sorted;
    }
}
