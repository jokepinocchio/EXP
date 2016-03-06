#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class person {
public:
    person(void);
    person(const person& per);
    //virtual ~person(void);
    virtual ~person(void);
    virtual void dosomeing(void)
    {
        cout << "###dosomeing person\n" << endl;
    }
	void do1()
	{
		this->dosomeing();
		(*this).dosomeing();
	}
private:
//    char name;
};

person::person(void)
{
    printf("person constructor\n");
	do1();
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
    ~student(void);
    void dosomeing(void)
    {
        cout << "###dosomeing student\n" << endl;
    }
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

void testdest()
{
    printf("===============\n");
    class person person1;

    class student student1;
    printf("===============\n");
}
int main(int argc, char** argv)
{
//    class student* cstudent = new student;
//    class student s1;
//    class student s2(s1);

    student student1;
    printf("create class student\n");

    teststudent(student1);

    printf("TEST CLASS\n");

#if 0

#endif

    //  if (cstudent)
    //     delete cstudent;

//  testdest();
    printf("################\n");
    person *p = new student;
    p->dosomeing();
    if (p)
        delete p;

    printf("===============\n");
    return 0;
}
