/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
        ListNode **q = &head;
        for(int i = 1; i < n; i++){
            p = p->next;
        }
        while(p->next){
            q = &((*q)->next);
            p = p->next;
        }
        *q = (*q)->next;
        return head;
    }
};
