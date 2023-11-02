/*
/ 单链表
/ 增删改查
*/

#ifndef _SLIST_H_
#define _SLIST_H_

typedef struct {
    int num;
    struct ListNode *next;
} ListNode;

ListNode *new_list_node(int num);
void delete_list_node(ListNode *node);
#endif
