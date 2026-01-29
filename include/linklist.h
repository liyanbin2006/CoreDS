#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // 考研常考：使用 bool 类型作为返回值

// 定义单链表结点类型
typedef struct LNode {
    int data;           // 数据域
    struct LNode *next; // 指针域
} LNode, *LinkList;

/* 专家笔记：
   LNode* 和 LinkList 在代码上是等价的，但语义不同：
   - LinkList：通常用来表示这是一个【整个链表】（指向头结点）。
   - LNode* ：通常用来表示这是一个【具体的结点】。
   这种区分能极大提高代码的可读性，也是考研卷子上的标准写法。
*/

#endif