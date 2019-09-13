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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, sum = 0, i = 0, j = 0;
        ListNode *p = l1;
        ListNode *q = l2;
        ListNode *s = new ListNode(0);
        ListNode *l = s;
        while(p != NULL || q != NULL || carry == 1){
            if(p != NULL){
                i = p->val;
                p = p->next;
            }else{
                i = 0;
            }
            if(q != NULL){
                j = q->val;
                q = q->next;
            }else{
                j = 0;
            }
            sum = i + j + carry;
            if(sum >= 10){
                carry = 1;
                sum -= 10;
            }else{
                carry = 0;
            }
            ListNode *r = new ListNode(sum);
            l->next = r;
            l = l->next;
        }
        s = s->next;
        return s;
    }
};
