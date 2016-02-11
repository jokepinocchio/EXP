#include <stdio.h>
#include "list.h"

int main(int argc, char** argv)
{
#ifdef _LIST_TEST_
    printf("TEST list\n");
#else
    printf("NOT TEST\n");
#endif
    return 0;
}
