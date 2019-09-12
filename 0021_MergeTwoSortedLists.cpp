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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        if(l1->val <= l2->val){
            ListNode *p = l1;
            ListNode *q = l2;
            while(p && q){
                if(p->next != NULL){
                    if(p->next->val <= q->val){
                        p = p->next;
                    }else{
                        l2 = q->next;
                        q->next = p->next;
                        p->next = q;
                        p = p->next;
                        q = l2;
                    }
                }else{
                    p->next = q;
                    break;
                }
            }
            return l1;
        }else{
            ListNode *p = l2;
            ListNode *q = l1;
            while(p && q){
                if(p->next != NULL){
                    if(p->next->val <= q->val){
                        p = p->next;
                    }else{
                        l1 = q->next;
                        q->next = p->next;
                        p->next = q;
                        p = p->next;
                        q = l1;
                    }
                }else{
                    p->next = q;
                    break;
                }
            }
            return l2;
        }
    }
};
