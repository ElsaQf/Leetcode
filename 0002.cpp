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
        int carry = 0;
        
        ListNode *p = l1;
        ListNode *q = l2;
        
        ListNode *head = new ListNode(0);
        head->next = NULL;
        ListNode *end = head;
        
        while(p && q){
            int sum = p->val + q->val + carry;
            if(sum >= 10){
                sum -= 10;
                carry = 1;
            }else{
                carry = 0;
            }
            ListNode *s = new ListNode(0);
            s->val = sum;
            s->next = NULL;
            end->next = s;
            end = s;
            p = p->next;
            q = q->next;
        }
        if(p == NULL && q == NULL && carry == 1){
            ListNode *s = new ListNode(0);
            s->val = carry;
            s->next = NULL;
            end->next = s;
            end = s;
            return head->next;
        }else if(p == NULL && q != NULL){
            while(q){
                int sum = q->val + carry;
                if(sum >= 10){
                    sum -= 10;
                    carry = 1;
                }else{
                    carry = 0;
                }
                ListNode *s = new ListNode(0);
                s->val = sum;
                s->next = NULL;
                end->next = s;
                end = s;
                q = q->next;
            }
        }else if(p != NULL && q == NULL){
            while(p){
                int sum = p->val + carry;
                if(sum >= 10){
                    sum -= 10;
                    carry = 1;
                }else{
                    carry = 0;
                }
                ListNode *s = new ListNode(0);
                s->val = sum;
                s->next = NULL;
                end->next = s;
                end = s;
                p = p->next;
            }
        }
        
        if(carry == 1){
            ListNode *s = new ListNode(0);
            s->val = carry;
            s->next = NULL;
            end->next = s;
            end = s;
        }
        
        return head->next;
    }
};
