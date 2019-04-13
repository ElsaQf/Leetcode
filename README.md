# Leetcode
Leetcode总结

## 0002 Add Two Numbers
链表数字相加：2->4->3 + 5->6->4 = 7->0->8 链表是倒序
### 方法：
1. 两个指针分别向后遍历，sum = p->val + q->val + carry
2. sum -= 10 carry = 1
3. 考虑链表末尾


## 0005 Longest Palindromic Substring
最长回形子字符串：abab的最长回形子字符串是aba或bab
### 方法：
1. i = 0, j = len - 1
2. k = i, t = j
3. 分别从前往后，从后往前遍历
4. 将回形字符串的序号i,j存到num里，返回i,j距离最大的
