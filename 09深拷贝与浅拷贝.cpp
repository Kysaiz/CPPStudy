#include <iostream>
using namespace std;

// �����ǳ����
class Person
{
public:
    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person���вι��캯������" << endl;
    }

    // �Լ�ʵ�ֿ������캯�������ǳ�����������ڴ��ͷ�����
    Person(const Person &p)
    {
        cout << "Person �������캯������" << endl;
        m_Age = p.m_Age;

        // ǳ����
        // m_Height = p.m_Height; ������Ĭ��ʵ�ֵĴ���

        // ���
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        // �������������������ٵ��ڴ����ͷ�
        if (m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person��������������" << endl;
    }

    int m_Age;
    int *m_Height;
};

void test1()
{
    Person p1(18, 160);
    cout << "p1������Ϊ��" << p1.m_Age << endl;
    cout << "p1�����Ϊ��" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2������Ϊ��" << p2.m_Age << endl;
    cout << "p2�����Ϊ��" << *p2.m_Height << endl;
};

int main()
{
    test1();

    system("pause");
    return 0;
}