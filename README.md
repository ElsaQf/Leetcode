# Leetcode
Leetcode总结

## Add Two Numbers
链表数字相加：2->4->3 + 5->6->4 = 7->0->8 链表是倒序
方法：
两个指针分别向后遍历，sum = p->val + q->val + carry
sum -= 10 carry = 1
考虑链表末尾
