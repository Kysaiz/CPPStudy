#include <iostream>
using namespace std;

// 类对象作为类成员
// 类成员的定义必须在类对象之前

// 手机类（作为人类的类成员)
class Mobile
{
public:
    Mobile(string pName)
    {
        cout << "Mobile构造函数调用" << endl;
        m_pName = pName;
    }
    ~Mobile()
    {
        cout << "Mobile析构函数调用" << endl;
    }
    string m_pName;
};

// 人类
class Person
{
public:
    Person(string name, string pName) : m_Name(name), m_Mobile(pName)
    {
        cout << "Person构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }

    // 姓名
    string m_Name;
    // 手机
    Mobile m_Mobile;
};

void test1()
{
    Person p("张三", "苹果MAX");
    cout << p.m_Name << "拿着：" << p.m_Mobile.m_pName << endl;
}

int main()
{
    test1();

    system("pause");
    return 0;
}