#include <stdio.h>
#include <stdlib.h>
//#include <complex>

class person {
public:
    person(void);
    person(const person& per);
    virtual ~person(void);

private:
//    char name;
};

person::person(void)
{
    printf("person constructor\n");
}
person::person(const person& per)
{
    printf("person copy constructor\n");
}

person::~person(void)
{
    printf("person destructor\n");
}

class student: public person {
public:
    student(void);
    student(const student& stu);
    virtual ~student(void);

private:
//    char name;
};
student::student(void)
{
    printf("student constructor\n");
}
student::student(const student& stu)
{
    printf("student copy constructor\n");
}
student::~student(void)
{
    printf("student destructor\n");
}

//bool teststudent(const student& s)
bool teststudent(student s)
{
    return 0;
}

int main(int argc, char** argv)
{
//    class student* cstudent = new student;
//    class student s1;
//    class student s2(s1);

    class student student1;
    printf("create class student\n");

    teststudent(student1);

    printf("TEST CLASS\n");

#if 0

#endif

    //  if (cstudent)
    //     delete cstudent;

    return 0;
}
