#include <iostream>
using namespace std;

// 成员变量 和 成员函数 分开存储

class Person
{
    // 占用4个字节，属于类的对象
    int m_A;

    // 不属于类的对象
    static int m_B;

    // 不属于类的对象
    void func()
    {
    }

    // 不属于类的对象
    static void func2()
    {
    }
};

int Person::m_B = 0;

void test1()
{
    Person p;
    // 空对象占用内存空间为：1Byte
    // C++编译器给每个空对象分配1个字节空间，为了区分空对象占内存的位置
    // 每个空对象都应该有一个独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
    test1();

    system("pause");
    return 0;
}