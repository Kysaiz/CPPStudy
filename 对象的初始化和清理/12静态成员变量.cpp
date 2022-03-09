#include <iostream>
using namespace std;

// 在成员变量和成员函数前加上关键字static称为静态成员
class Person
{
public:
    // 1、所有对象都共享同一份数据
    // 2、编译阶段就分配内存
    // 3、类内声明，类外初始化操作
    static int m_A;

    // 静态成员变量有访问权限

private:
    static int m_B;
};

// 类外初始化
int Person::m_A = 100;
int Person::m_B = 300;

void test1()
{
    Person p;
    cout << p.m_A << endl;

    // 所有对象都共享同一份数据
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;
}

void test2()
{
    // 静态成员变量不属于某个对象，所有对象都共享同一份数据
    // 因此静态成员变量有两种访问方式
    // 1、通过对象进行访问
    Person p;
    cout << p.m_A << endl;
    // 2、通过类名进行访问
    cout << Person::m_A << endl;

    // cout << Person::m_B << endl;
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}