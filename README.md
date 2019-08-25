# Leetcode
    Leetcode in Cpp
    Order by Tag
    用c++刷leetcode（比较顺手），按照tag顺序，easy & medium
## Array    
### 0001 Two Sum (Easy)
给定一个数组和一个数字，返回数组中两数之和为给定数字的序号
#### 方法：
- 从头开始遍历，判断两数之和是否等于给定值
#### 优化方法：
- 排序
- 从两头取值，求和

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
