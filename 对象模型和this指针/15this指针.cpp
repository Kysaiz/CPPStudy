#include <iostream>
using namespace std;

// this指针
// 1、解决名称冲突
// 2、返回对象本身用*this

class Person
{
public:
    Person(int age)
    {
        // this指针指向 被调用的成员函数 所属的对象
        this->age = age;
    }

    Person &PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }

    int age;
};

// 解决名称冲突
void test1()
{
    // 对象p1调用了Person的有参构造函数
    Person p1(18);
    cout << "p1 的年龄为" << p1.age << endl;
}

// 返回对象本身用*this
void test2()
{
    Person p1(10);

    Person p2(18);

    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2 的年龄为" << p2.age << endl;
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}