#include <iostream>
using namespace std;

// 在成员函数前加上关键字static称为静态成员函数
class Person
{
public:
    // 1、所有对象都共享同一个函数
    // 2、静态成员函数只能访问静态成员变量
    static void func()
    {
        m_A = 100; // 静态成员函数可以访问静态成员变量
        // m_B = 200; // 静态成员函数不可以访问非静态成员变量
        cout << "static void func调用" << endl;
    }

    static int m_A; // 静态成员变量
    int m_B;        // 非静态成员变量

private:
    static void func2()
    {
        cout << "static void func2调用" << endl;
    }
};

// 类外初始化
int Person::m_A = 100;

void test1()
{
    // 1、通过对象进行访问
    Person p;
    p.func();

    // 2、通过类名进行访问
    Person::func();

    // Person::func2();
}

int main()
{
    test1();

    system("pause");
    return 0;
}