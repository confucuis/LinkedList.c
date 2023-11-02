/*
// 双链表
// 增删改查
*/

#ifndef _DLIST_H_
#define _DLIST_H_

// 存储整形的节点
typedef struct {
    int num;
    struct ListNode *prev = NULL;
    struct ListNode *next = NULL;
} ListNode;

#endif
