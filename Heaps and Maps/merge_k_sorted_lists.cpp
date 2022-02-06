// Merge k sorted linked lists and return it as one sorted list.

// Example :

// 1 -> 10 -> 20
// 4 -> 11 -> 13
// 3 -> 8 -> 9
// will result in

// 1 -> 3 -> 4 -> 8 -> 9 -> 10 -> 11 -> 13 -> 20



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct compare {
    bool operator()(struct ListNode* a, struct ListNode* b){
        return a->val > b->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<ListNode*, std::vector<ListNode*>, compare > pq;
    ListNode head(0);
    ListNode *curNode = &head;

    for (int i = 0; i < A.size(); i++){
        if (A[i])
	        pq.push(A[i]);
    }
    while (!pq.empty()){
        curNode->next = pq.top();
        pq.pop();
        curNode = curNode->next;
        if (curNode->next)
	        pq.push(curNode->next);
    }
    return head.next;
}
