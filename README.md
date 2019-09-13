# Leetcode
    Leetcode in Cpp
    Order by Tag
    用c++刷leetcode（比较顺手），按照tag顺序，easy & medium
    
## Array    
### 0001 Two Sum (Easy)
        给定一个数组和一个数字，返回数组中两数之和为给定数字的序号
#### 方法：
        - 从头开始遍历，判断两数之和是否等于给定值
#### 优化：
        - 排序
        - 从两头取值，求和
### 0011 Container with Most Water(Medium)
        给定数组，作为水桶高度，序号之差作为宽度，计算最大水容量
![最大水容量](https://github.com/ElsaQf/Leetcode/blob/master/PictureOfProblem/%E6%9C%80%E5%A4%A7%E6%B0%B4%E5%AE%B9%E9%87%8F.JPG)
#### 方法：
        - 从头开始遍历，取两个数中小的作为高度h，序号之差作为宽度l，面积a=h*l
#### 优化：
        - 从两头向中间逼近，每次移动短的边，更新最大面积，这样可以保证遍历所有面积
### 0015 3Sum(Medium)
        给定数组，找出所有的三数之和为0
#### 方法：
        - 固定第一个数nums[i]（从头开始遍历），找出剩下两数之和为-nums[i]
        - 从i+1开始为font, n-1为back
        - 根据sum(nums[font],nums[back])与-nums[i]的关系：font++/back--
        - result[0]固定，后面的数字不能重复，确定循环条件
## Linked List
### 0021 Merge Two Sorted Lists（Easy）
        给定两个有序链表，输出合并后的链表（升序，无需去重）
#### 方法：
        - 检查两个链表是否为空，若空，则输出另一个
        - if...else 分两种情况，大的表头节点需要跟另一个链表的前后两个节点比较
        - 考虑链表遍历完的情况
### 0002 Add Two Numbers(Medium)
        给定两个链表分别代表两个倒序数字，输出两数之和（也为倒序链表）
        例如：2->4->3,5->6->7 = 7->0->8(实际是342+765=807)
#### 方法：
        - 设置sum,carry,根据sum与10比较，更新sum和carry
        - i=p->val, j=q->val 根据链表长度变换为0
        - 循环条件是while(p || q || carry)
### 0019 Remove Nth Node From End of the List(Medium)
        移除链表的倒数第n个元素
#### 方法：
        - 倒数第n个元素，为正数l-n
        - 让第一个指针先走1->n，第二个指针从头开始和第一个指针一起走，直到第一个指针先到达最后一个元素
        - ListNode *p = head, **q = &head
        - p = p->next, q = &((*q)->next), *q = (*q)->next, return head
## Tree
### 0100 Same Tree(Easy)
        判断两棵二叉树是否相同（结构相同，对应节点值也相同）
#### 方法：
        - 遍历，空的位置补-1
        - 比较得到的两个数组是否完全相同
#### 优化：
        - 递归
        - return (p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right))
### 0094 BinaryTreeInorderTraveral(Medium)
        二叉树中序遍历（非递归）
#### 方法：
        - 记住
        - stack<TreeNode *> s

## 0005 Longest Palindromic Substring
最长回形子字符串：abab的最长回形子字符串是aba或bab
### 方法：
1. i = 0, j = len - 1
2. k = i, t = j
3. 分别从前往后，从后往前遍历
4. 将回形字符串的序号i,j存到num里，返回i,j距离最大的

## 0006 ZigZag Conversion
之字形存储字符串：按列存储，按行输出
### 方法：
1. 字符串s，行数n
2. 位置依次是00,10,20,11,02;12,22,13,03;13,23,...

## 0008 String to Integer
字符串转数字："     123"->123 "-1"->-1 "2000000000000000000000"->INT_MAX "word of 8"->0
### 方法：
1. 跳过空格
2. 正数，负数正常显示
3. 越界
4. 非数字输出0

## 0012 Integer to Roman
数字转罗马数字
### 方法：
1. 列举罗马数字对应的数值
2. "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
3. 1000,900,500,400,100,90,50,40,10,9,5,4,1

## 0019 Remove Nth Node From End of List
移除链表倒数第n个元素
### 方法：
1. 设置两个指针，前后相差n个距离移动
2. 讨论区方法：ListNode** t1 = &head, ListNode* t2 = head;
