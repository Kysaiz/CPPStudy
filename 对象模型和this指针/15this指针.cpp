#include <iostream>
using namespace std;

// thisָ��
// 1��������Ƴ�ͻ
// 2�����ض�������*this

class Person
{
public:
    Person(int age)
    {
        // thisָ��ָ�� �����õĳ�Ա���� �����Ķ���
        this->age = age;
    }

    Person &PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }

    int age;
};

// ������Ƴ�ͻ
void test1()
{
    // ����p1������Person���вι��캯��
    Person p1(18);
    cout << "p1 ������Ϊ" << p1.age << endl;
}

// ���ض�������*this
void test2()
{
    Person p1(10);

    Person p2(18);

    p2.PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2 ������Ϊ" << p2.age << endl;
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}