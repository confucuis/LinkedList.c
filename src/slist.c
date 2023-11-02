#include <stdlib.h>
#include "slist.h"


// 构造函数(新建节点)
ListNode *new_list_node(int num)
{
    ListNode *node, *next;
    node = (ListNode *)malloc(sizeof(ListNode));
    if (!node) {
        return NULL;
    }
    node->num = num;
    node->next = NULL;
    return node;
}


// 析构函数(清理节点)
void delete_list_node(ListNode *node)
{
    if (!node) {
        free(node);
    }
}
