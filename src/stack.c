#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "stack.h"


ListStack *new_list_stack(void)
{
    ListStack *stack = (ListStack *)malloc(sizeof(ListStack));
    if (stack == NULL)
	return NULL;
    stack->top = NULL;
    stack->size = 0;
    return stack;
}


void delete_list_stack(ListStack *stack)
{
    if (stack != NULL) free(stack);
}


int size(ListStack *stack)
{
    return stack->size;
}


bool is_empty(ListStack *stack)
{
    return stack->size == 0;
}


int peek(ListStack *stack)
{
    if (stack->size == 0) assert(stack);
    else return stack->top->num;
}


void push(ListStack *stack, int num)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->next = stack->top;
    node->num = num;
    stack->top = node;
    stack->size++;
}


int pop(ListStack *stack)
{
    if (!is_empty(stack)) assert(stack);
    int num = peek(stack);
    ListNode *tmp = stack->top;
    stack->top = stack->top->next;
    free(tmp);
    stack->size--;
    return num;
}
