#include <iostream>
using namespace std;

// �������Ϊ���Ա
// ���Ա�Ķ�������������֮ǰ

// �ֻ��ࣨ��Ϊ��������Ա)
class Mobile
{
public:
    Mobile(string pName)
    {
        cout << "Mobile���캯������" << endl;
        m_pName = pName;
    }
    ~Mobile()
    {
        cout << "Mobile������������" << endl;
    }
    string m_pName;
};

// ����
class Person
{
public:
    Person(string name, string pName) : m_Name(name), m_Mobile(pName)
    {
        cout << "Person���캯������" << endl;
    }

    ~Person()
    {
        cout << "Person������������" << endl;
    }

    // ����
    string m_Name;
    // �ֻ�
    Mobile m_Mobile;
};

void test1()
{
    Person p("����", "ƻ��MAX");
    cout << p.m_Name << "���ţ�" << p.m_Mobile.m_pName << endl;
}

int main()
{
    test1();

    system("pause");
    return 0;
}