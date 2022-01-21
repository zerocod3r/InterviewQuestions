/* Given a singly linked list, modify the value of first half nodes such that :

1st node’s new value = the last node’s value - first node’s current value
2nd node’s new value = the second last node’s value - 2nd node’s current value,
and so on …

NOTE :

If the length L of linked list is odd, then the first half implies at first floor(L/2) nodes. So, if L = 5, the first half refers to first 2 nodes.
If the length L of linked list is even, then the first half implies at first L/2 nodes. So, if L = 4, the first half refers to first 2 nodes.
Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5,

You should return 4 -> 2 -> 3 -> 4 -> 5

as

for first node, 5 - 1 = 4
for second node, 4 - 2 = 2
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::subtract(ListNode* A) {
    if((A == NULL) || (A->next == NULL)){
        return A;
    }
    
    ListNode* curr = A;    
    ListNode* revHead;
    ListNode* mid = A;
    ListNode* origPrev;
    ListNode* temp;
    ListNode* prev = NULL;
    
    while((curr != NULL) && (curr->next != NULL)){
        curr = (curr->next)->next;
        origPrev = mid;
        mid = mid->next;
    }
    
    origPrev->next = NULL;
    
    curr = mid;
    
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    
    revHead = prev;
    
    curr = A;
    temp = revHead;
    
    while(curr != NULL){
        curr->val = (temp->val)-(curr->val);
        curr = curr->next;
        temp = temp->next;
    }
    
    curr = revHead;
    prev = NULL;
    
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    
    origPrev->next = prev;
    
    return A;
}
