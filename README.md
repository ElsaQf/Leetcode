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
        3 从两头向中间逼近，每次移动短的边，更新最大面积，这样可以保证遍历所有面积
### 0015 3Sum(Medium)
        给定数组，找出所有的三数之和为0
#### 方法：
        - 固定第一个数nums[i]（从头开始遍历），找出剩下两数之和为-nums[i]
        - 从i+1开始为font, n-1为back
        - 根据sum(nums[font],nums[back])与-nums[i]的关系：font++/back--
        - result[0]固定，后面的数字不能重复，确定循环条件



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
