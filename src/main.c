#include <stdio.h>
#include "slist.h"


int main(void)
{
    ListNode *n0, *n1, *n2;
    n0 = new_list_node(0);
    n1 = new_list_node(1);
    n2 = new_list_node(2);
    n0->next = n1;
    n1->next = n2;
    n2->next = NULL;

    printf("%d\n", n0->num);
    printf("%d\n", n1->num);
    printf("%d\n", n2->num);
    delete_list_node(n0);
    delete_list_node(n1);
    delete_list_node(n2);

    return 0;
}
