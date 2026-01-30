#include "../../include/List/SqListMalloc.h"
#include <stdlib.h>

//初始化
void InitList(SqListMalloc *L){
    L->data=(int*)malloc(sizeof(int)*Initsize);

    if (L->data == NULL) {
        // 考研严谨写法：内存分配失败的处理
        exit(0); 
    }

    L->length=0;
    L->MaxSize=Initsize;
}
//扩容

//插入

//删除

//按值查找