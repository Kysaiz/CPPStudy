#include <iostream>
using namespace std;

// ����Ȩ��
// ����Ȩ�� public      ��Ա    ���ڿ��Է���    ������Է���
// ����Ȩ�� protected   ��Ա    ���ڿ��Է���    ���ⲻ���Է���  �ӿ��Է��ʸ��ı�������
// ˽��Ȩ�� private     ��Ա    ���ڿ��Է���    ���ⲻ���Է���  �Ӳ����Է��ʸ��ı�������

class Person
{
public:
    // ����Ȩ��
    string m_Name; // ����

protected:
    // ����Ȩ��
    string m_Car; // ����

private:
    // ˽��Ȩ��
    int m_Password; // ���п�����

public:
    void func()
    {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;
    }
};

int main()
{
    Person p1;
    p1.m_Name = "����";
    p1.m_Car = "������";
    p1.m_Password = 123;

    system("pause");

    return 0;
}