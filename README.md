# Leetcode
Leetcode总结

## Add Two Numbers
链表数字相加：2->4->3 + 5->6->4 = 7->0->8 链表是倒序
方法：
1. p1 = l1, p2 = l2
2. sum = p1 + p2 + carry
3. if(sum >= 10) sum -= 10, carry = 1
    else carry = 0
4. p1 == NULL && p2 == NULL && carry == 0  return
5. 
