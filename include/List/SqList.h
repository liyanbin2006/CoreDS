#ifndef SQLIST_H
#define SQLIST_H

#include <stdbool.h>

#define MaxSize 50          // 定义线性表的最大长度

typedef struct {
    int data[MaxSize];      // 存放顺序表元素的数组
    int length;             // 顺序表现有的长度
} SqList;                   // 顺序表的类型定义

/* 专家提示：
1. 考研题目中，MaxSize 经常作为参数边界。
2. 记住，顺序表的位序是从 1 开始的，而数组下标是从 0 开始的。
   插入和删除时，这个“1”的偏移是考试最容易出错的地方。
*/

#endif