#include <iostream>
using namespace std;

// �������캯���ĵ���ʱ��
// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// 2��ֵ���ݵķ�ʽ������������ֵ
// 3��ֵ��ʽ���ؾֲ�����

class Person
{
public:
    // ���캯��
    Person()
    {
        cout << "�޲ι��캯����������" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "�вι��캯����������" << endl;
    }
    // �������캯��
    Person(const Person &p)
    {
        age = p.age;
        cout << "�������캯����������" << endl;
    }
    // ��������
    ~Person()
    {
        // cout << "����������������" << endl;
    }

    int age;
};

// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1()
{
    Person p1(20);
    Person p2(p1);
}

// 2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{
}
void test2()
{
    Person p;
    doWork(p);
}

// 3��ֵ��ʽ���ؾֲ�����(MinGW���Ż��������øÿ������캯��)
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