#include <iostream>
using namespace std;

// const���γ�Ա���� ������
// const���ζ��� ������

class Person
{
public:
    // this ָ��ı����� ָ�볣�� ָ���ָ���ǲ����޸ĵ�
    // const Person * const this;
    // �ڳ�Ա���������const,���ε���thisָ����ָ��ָ���ֵҲ�����޸�
    void showPerson() const
    {
        // this->m_A = 100;
        this->m_B = 100;
        // this = NULL; // thisָ�벻���޸�ָ���ָ��
    }

    int m_A;
    mutable int m_B; // ����mutable�ؼ��ֺ󣬿��ڳ��������޸�ֵ

    Person()
    {
    }

    void func()
    {
        m_A = 100;
    }
};

void test1()
{
    Person p;
    p.showPerson();
}

void test2()
{
    const Person p; // �ڶ���ǰ��const����Ϊ������
    p.m_B = 100;
    p.showPerson();
    // p.func(); ������ֻ�ܵ��ó�����
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}