#include <stdio.h>


#ifdef SLIST_UP
#include "slist.h"
#endif

#ifdef DLIST_UP
#include "dlist.h"
#endif

#ifdef CLIST_UP
#include "clist.h"
#endif


int main(void)
{
#ifdef SLIST
    // 单链
    SListNode *sn0, *sn1, *sn2;
    sn0 = new_list_node(0);
    sn1 = new_list_node(1);
    sn2 = new_list_node(2);
    sn0->next = sn1;
    sn1->next = sn2;
    sn2->next = NULL;

    printf("%d\n", sn0->num);
    printf("%d\n", sn1->num);
    printf("%d\n", sn2->num);
    delete_list_node(sn0);
    delete_list_node(sn1);
    delete_list_node(sn2);
#endif

#ifdef DLIST
    // 双链
    DListNode *dn0, *dn1, *dn2;
    dn0 = new_list_node(0);
    dn1 = new_list_node(1);
    dn2 = new_list_node(2);
    dn0->prev = NULL;
    dn0->next = dn1;
    dn1->prev = dn0;
    dn1->next = dn2;
    dn2->prev = dn1;
    dn2->next = NULL;

    printf("%d\n", dn0->num);
    printf("%d\n", dn1->num);
    printf("%d\n", dn2->num);

    delete_list_node(dn0);
    delete_list_node(dn1);
    delete_list_node(dn2);
#endif

#ifdef CLIST
    // 环链
    CListNode *cn0, *cn1, *cn2;
    cn0 = new_list_node(0);
    cn1 = new_list_node(1);
    cn2 = new_list_node(2);
    cn0->prev = cn2;
    cn0->next = cn1;
    cn1->prev = cn0;
    cn1->next = cn2;
    cn2->prev = cn1;
    cn2->next = cn0;

    printf("%d\n", cn0->num);
    printf("%d\n", cn1->num);
    printf("%d\n", cn2->num);

    delete_list_node(cn0);
    delete_list_node(cn1);
    delete_list_node(cn2);
#endif

    return 0;
}
