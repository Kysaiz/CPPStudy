#include <iostream>
using namespace std;

// ���캯���ķ���
// ���������� �޲ι��죨Ĭ�Ϲ��죩���вι���
// �����ͷ��� ��ͨ����Ϳ�������

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

void test1()
{
    // ���캯���ĵ���
    // 1�����ŷ�
    Person p1;     // �޲�
    Person p2(10); // �в�
    Person p3(p2); // ����

    // 2����ʾ��
    Person p4 = Person(10);
    Person p5 = Person(p4);

    // 3����ʽת����
    Person p6 = 10; // �൱�� Person p = Person(10);
    Person p7 = p6;
}

int main()
{
    test1();

    system("pause");
    return 0;
}