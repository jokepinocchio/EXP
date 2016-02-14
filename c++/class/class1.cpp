#include <iostream>

class A {
public:
    void foo()
        {
            printf("1\n");
        }
    virtual void fun()
        {
            printf("2\n");
        }
};

class B : public A {
public:
    void foo()
        {
            printf("3\n");
        }
    void fun()
        {
            printf("4\n");
        }
};

int main(int argc, char** argv)
{
    A a;
    B b;
    A *p = &a;
    p->foo();
    p->fun();

    p = &b;
    p->foo();
    p->fun();

    B *ptr = (B*)&a;
    ptr->foo();
    ptr->fun();

    return 0;
}
