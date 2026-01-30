#include "../../include/List/SqListMalloc.h"

//初始化
void InitList(SqListMalloc *L){
    L->data=(SqListMalloc*)malloc(sizeof(SqListMalloc)*Initsize);
    L->length=0;
    L->MaxSize=Initsize;
}
//扩容

//插入

//删除

//按值查找