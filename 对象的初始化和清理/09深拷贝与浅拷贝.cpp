#include <iostream>
using namespace std;

// 深拷贝与浅拷贝
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }

    // 自己实现拷贝构造函数，解决浅拷贝带来的内存释放问题
    Person(const Person &p)
    {
        cout << "Person 拷贝构造函数调用" << endl;
        m_Age = p.m_Age;

        // 浅拷贝
        // m_Height = p.m_Height; 编译器默认实现的代码

        // 深拷贝
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        // 析构函数，将堆区开辟的内存做释放
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;
    int *m_Height;
};

void test1()
{
    Person p1(18, 160);
    cout << "p1的年龄为：" << p1.m_Age << endl;
    cout << "p1的身高为：" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
    cout << "p2的身高为：" << *p2.m_Height << endl;
};

int main()
{
    test1();

    system("pause");
    return 0;
}