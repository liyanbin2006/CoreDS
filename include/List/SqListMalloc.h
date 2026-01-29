#ifndef SQLIST_MALLOC_H
#define SQLIST_MALLOC_H

#include <stdbool.h>

typedef struct {
    int* data;      // 存放数据的地址
    int length;             // 顺序表现有的长度
    int MaxSize;        //动态数组现有的总容量
} SqListMalloc;                   // 顺序表的类型定义

/* 
*/

#endif