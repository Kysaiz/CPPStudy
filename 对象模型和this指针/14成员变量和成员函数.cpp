#include <iostream>
using namespace std;

// ��Ա���� �� ��Ա���� �ֿ��洢

class Person
{
    // ռ��4���ֽڣ�������Ķ���
    int m_A;

    // ��������Ķ���
    static int m_B;

    // ��������Ķ���
    void func()
    {
    }

    // ��������Ķ���
    static void func2()
    {
    }
};

int Person::m_B = 0;

void test1()
{
    Person p;
    // �ն���ռ���ڴ�ռ�Ϊ��1Byte
    // C++��������ÿ���ն������1���ֽڿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
    // ÿ���ն���Ӧ����һ����һ�޶����ڴ��ַ
    cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
    test1();

    system("pause");
    return 0;
}