#include <iostream>
using namespace std;

// �ڳ�Ա����ǰ���Ϲؼ���static��Ϊ��̬��Ա����
class Person
{
public:
    // 1�����ж��󶼹���ͬһ������
    // 2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
    static void func()
    {
        m_A = 100; // ��̬��Ա�������Է��ʾ�̬��Ա����
        // m_B = 200; // ��̬��Ա���������Է��ʷǾ�̬��Ա����
        cout << "static void func����" << endl;
    }

    static int m_A; // ��̬��Ա����
    int m_B;        // �Ǿ�̬��Ա����

private:
    static void func2()
    {
        cout << "static void func2����" << endl;
    }
};

// �����ʼ��
int Person::m_A = 100;

void test1()
{
    // 1��ͨ��������з���
    Person p;
    p.func();

    // 2��ͨ���������з���
    Person::func();

    // Person::func2();
}

int main()
{
    test1();

    system("pause");
    return 0;
}