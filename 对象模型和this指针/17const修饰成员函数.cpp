#include <iostream>
using namespace std;

// const修饰成员函数 常函数
// const修饰对象 常对象

class Person
{
public:
    // this 指针的本质是 指针常量 指针的指向是不可修改的
    // const Person * const this;
    // 在成员函数后面加const,修饰的是this指向，让指针指向的值也不可修改
    void showPerson() const
    {
        // this->m_A = 100;
        this->m_B = 100;
        // this = NULL; // this指针不可修改指针的指向
    }

    int m_A;
    mutable int m_B; // 加上mutable关键字后，可在常函数中修改值

    Person()
    {
    }

    void func()
    {
        m_A = 100;
    }
};

void test1()
{
    Person p;
    p.showPerson();
}

void test2()
{
    const Person p; // 在对象前加const，变为常对象
    p.m_B = 100;
    p.showPerson();
    // p.func(); 常对象只能调用常函数
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}