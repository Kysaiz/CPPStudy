#include <iostream>
using namespace std;

// 构造函数的分类
// 按参数分类 无参构造（默认构造）和有参构造
// 按类型分类 普通构造和拷贝构造

class Person
{
public:
    // 构造函数
    Person()
    {
        cout << "无参构造函数被调用了" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "有参构造函数被调用了" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝构造函数被调用了" << endl;
    }
    // 析构函数
    ~Person()
    {
        // cout << "析构函数被调用了" << endl;
    }

    int age;
};

void test1()
{
    // 构造函数的调用
    // 1、括号法
    Person p1;     // 无参
    Person p2(10); // 有参
    Person p3(p2); // 拷贝

    // 2、显示法
    Person p4 = Person(10);
    Person p5 = Person(p4);

    // 3、隐式转换法
    Person p6 = 10; // 相当于 Person p = Person(10);
    Person p7 = p6;
}

int main()
{
    test1();

    system("pause");
    return 0;
}