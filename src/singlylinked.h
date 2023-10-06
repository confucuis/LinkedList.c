/*
/ 单链表
/ 增删改查
*/

#ifndef _SINGLY_LINKED_
#define _SINGLY_LINKED_

typedef struct {
    int data;
    ListNode *next;
} ListNode;

ListNode *new_node(int data);
void destory_node();

#endif
