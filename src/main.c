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

    printf("单链: %d, sn0地址: %p\n", sn0->num, &sn0);
    printf("单链: %d, sn1地址: %p\n", sn1->num, &sn1);
    printf("单链: %d, sn2地址: %p\n", sn2->num, &sn2);
 
    printf("单链sn0->sn1: %d\n", sn0->next->num);
    printf("单链sn1->sn2: %d\n", sn1->next->num);

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

    printf("双链: %d, dn0地址: %p\n", dn0->num, &dn0);
    printf("双链: %d, dn1地址: %p\n", dn1->num, &dn1);
    printf("双链: %d, dn2地址: %p\n", dn2->num, &dn2);

    printf("双链sn0->sn1: %d\n", dn0->next->num);
    printf("双链sn1->sn2: %d\n", dn1->next->num);
    printf("双链sn2->sn1: %d\n", dn2->prev->num);
    printf("双链sn1->sn0: %d\n", dn1->prev->num);
    
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

    printf("环链: %d, cn0地址: %p\n", cn0->num, &cn0);
    printf("环链: %d, cn1地址: %p\n", cn1->num, &cn1);
    printf("环链: %d, cn2地址: %p\n", cn2->num, &cn2);

    printf("环链cn0->cn1: %d\n", cn0->next->num);
    printf("环链cn1->cn2: %d\n", cn1->next->num);
    printf("环链cn2->cn0: %d\n", cn2->next->num);
    printf("环链cn0->cn2: %d\n", cn0->prev->num);
    printf("环链cn1->cn0: %d\n", cn1->prev->num);
    printf("环链cn2->sn1: %d\n", cn2->prev->num);
    delete_list_node(cn0);
    delete_list_node(cn1);
    delete_list_node(cn2);
#endif

    return 0;
}
