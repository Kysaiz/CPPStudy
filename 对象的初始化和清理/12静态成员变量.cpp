#include <iostream>
using namespace std;

// �ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static��Ϊ��̬��Ա
class Person
{
public:
    // 1�����ж��󶼹���ͬһ������
    // 2������׶ξͷ����ڴ�
    // 3�����������������ʼ������
    static int m_A;

    // ��̬��Ա�����з���Ȩ��

private:
    static int m_B;
};

// �����ʼ��
int Person::m_A = 100;
int Person::m_B = 300;

void test1()
{
    Person p;
    cout << p.m_A << endl;

    // ���ж��󶼹���ͬһ������
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;
}

void test2()
{
    // ��̬��Ա����������ĳ���������ж��󶼹���ͬһ������
    // ��˾�̬��Ա���������ַ��ʷ�ʽ
    // 1��ͨ��������з���
    Person p;
    cout << p.m_A << endl;
    // 2��ͨ���������з���
    cout << Person::m_A << endl;

    // cout << Person::m_B << endl;
}

int main()
{
    test1();
    test2();

    system("pause");
    return 0;
}