#include <stdio.h>
#include <iostream>

using namespace std;

class CNullPointCall {

public:
    static void test1();
    void test2();
    void test3(int iTest);
    void test4();

private:
    static int m_iStatic;
    int m_iTest;
 
};   


int CNullPointCall::m_iStatic = 7;

void CNullPointCall::test1()
{
   // cout << m_iStatic << endl;
   printf("%d\n", m_iStatic);
}

void CNullPointCall::test2()
{
//    cout << "null ponit test" << endl;
    printf("Null point test\n");
}

void CNullPointCall::test3(int iTest)
{
    //cout << iTest << endl;
    printf("%d\n", iTest);
}

void CNullPointCall::test4()
{
    //cout << m_iTest << endl;
    printf("%d\n", m_iTest);
}

int main(void)
{
    CNullPointCall *pNull = NULL;

    pNull->test1();
    pNull->test2();
    pNull->test3(0xffff);
    pNull->test4();

    return 0;
}
