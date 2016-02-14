#include <stdio.h>
#include <stdlib.h>
//#include <complex>

class person {
public:
    person(void);
    person(const person& per);
    virtual ~person(void);

private:
    char name;
};

person::person(void)
{
    printf("person in\n");
}
person::person(const person& per)
{
    printf("person copy\n");
}

person::~person(void)
{
    printf("person out\n");
}

class student: public person {
public:
    student(void);
    student(const student& stu);
    virtual ~student(void);

private:
    char name;
};
student::student(void)
{
    printf("student in\n");
}
student::student(const student& stu)
{
    printf("student copy\n");
}
student::~student(void)
{
    printf("student out\n");
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

    teststudent(student1);

    printf("TEST CLASS\n");

#if 0

#endif

    //  if (cstudent)
    //     delete cstudent;

    return 0;
}
