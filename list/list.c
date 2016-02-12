
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct _t_list {
    struct list_head list;
    int num;
};


int main(int argc, char** argv)
{
    struct _t_list *list_1;
    struct _t_list *list_2;
    struct _t_list *list_3;
    struct _t_list *list_0;

    LIST_HEAD(head);

    list_1 = malloc(sizeof(*list_1));
    list_1->num = 1;
    INIT_LIST_HEAD(&list_1->list);

    list_2 = malloc(sizeof(*list_2));
    list_2->num = 2;
    INIT_LIST_HEAD(&list_2->list);


    list_3 = malloc(sizeof(*list_3));
    list_3->num = 3;
    INIT_LIST_HEAD(&list_3->list);

    list_add(&list_1->list, &head);
    list_add(&list_2->list, &head);
    list_add(&list_3->list, &head);

    list_for_each_entry(list_0, &head, list) {
        printf("add %d\n", list_0->num);
    }

    list_for_each_entry_reverse(list_0, &head, list) {
        printf("reverse  %d\n", list_0->num);
    }

    list_del(&list_2->list);
    list_for_each_entry(list_0, &head, list) {
        printf("del %d\n", list_0->num);
    }
#if 1
    list_replace(&list_3->list, &list_2->list);
    list_for_each_entry(list_0, &head, list) {
        printf("replace %d\n", list_0->num);
    }
#endif

#ifdef _LIST_TEST_
    printf("HAVE TEST LIST MACRO\n");
#else
    printf("NONE TEST LIST MACRO\n");
#endif

    return 0;
}
