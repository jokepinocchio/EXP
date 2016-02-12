
/**
 * g++ list.cpp -lCppUTest -lCppUTestExt
 *
 */

extern "C" {
#include <stdio.h>
//  #include "list.h"
}

#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup)
{

};
TEST(FirstTestGroup, FirstTest)
{
  FAIL("fail me!");
}

int main(int argc, char** argv)
{
#if 0
    int a = 1;
    int b;
#ifdef _LIST_TEST_
    printf("TEST list\n");
#else
    printf("NOT TEST\n");
#endif

    while (1) {

    }
#else
    CommandLineTestRunner::RunAllTests(argc, argv);
#endif
    return 0;
}
