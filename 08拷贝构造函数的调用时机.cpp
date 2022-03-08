#include <iostream>
using namespace std;

// 拷贝构造函数的调用时机
// 1、使用一个已经创建完毕的对象来初始化一个新对象
// 2、值传递的方式给函数参数传值
// 3、值方式返回局部对象

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

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{
    Person p1(20);
    Person p2(p1);
}

// 2、值传递的方式给函数参数传值
void doWork(Person p)
{
}
void test2()
{
    Person p;
    doWork(p);
}

// 3、值方式返回局部对象(MinGW已优化，不调用该拷贝构造函数)
Person doWork2()
{
    Person p1;
    return p1;
}
void test3()
{
    Person p = doWork2();
}

int main()
{
    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}