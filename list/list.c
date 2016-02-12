#include <stdio.h>
#include "list.h"

struct _t_list {
    struct list_head list;
    int num;
};


int main(int argc, char** argv)
{
    int a = 1;
    int b;
    struct _t_list *list_1, *list_2, *list_3;
    struct _t_list *list_0;

    LIST_HEAD(head);

    list_1 = malloc(sizeof(*list_1));
    list_1->num = 1;
    INIT_LIST_HEAD(&list_1->list);

    list_2 = malloc(sizeof(*list_2));
    list_2->num = 2;
    INIT_LIST_HEAD(&list_2->list);

    list_add(&list_1->list, &head);
    list_add(&list_2->list, &head);

    list_for_each_entry(list_0, &head, list) {
        printf("%d\n", list_0->num);
    }

#ifdef _LIST_TEST_
    printf("TEST list\n");
#else
    printf("NOT TEST\n");
#endif

    return 0;
}
