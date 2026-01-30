#include "../../include/List/SqListMalloc.h"
#include <stdlib.h>

//初始化
void InitList(SqListMalloc *L){
    L->data=(int*)malloc(sizeof(int)*Initsize);
    L->length=0;
    L->MaxSize=Initsize;
}
//扩容

//插入

//删除

//按值查找