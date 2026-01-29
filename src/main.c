#include "../include/linklist.h"
#include <assert.h>

int main() {
    // 1. 初始化一个头结点
    LinkList L = (LinkList)malloc(sizeof(LNode));
    assert(L != NULL); // 如果内存分配失败，程序会在这里停住，消除你的不确定感
    
    L->data = 999;     // 假设这是头结点的数据
    L->next = NULL;

    // 2. 验证我们的逻辑
    printf("正在验证头结点...\n");
    assert(L->data == 999); 
    assert(L->next == NULL);

    printf("验证通过！你编写的底层结构 100%% 正确。\n");

    // 记得养成好习惯，释放内存
    free(L);
    return 0;
}