#include <iostream>
using namespace std;

// Բ����
const double PI = 3.14;

// ���һ��Բ�࣬��Բ���ܳ�
// Բ�ܳ���ʽ C=2��r
class Circle
{
    // ����Ȩ��
    // ����Ȩ��
public:
    // ���ԣ���Ա���ԡ���Ա������
    // �뾶
    int m_r;

    // ��Ϊ����Ա��������Ա������
    // ��ȡԲ���ܳ�
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

class Student
{
public:
    string number, name;

    void showStudent()
    {
        cout << "������" << name << endl;
        cout << "ѧ�ţ�" << number << endl;
    }

    // ��������ֵ
    void setName(string t_name)
    {
        name = t_name;
    }

    // ��ѧ�Ÿ�ֵ
    void setNumber(string t_number)
    {
        number = t_number;
    }
};

int main()
{
    // // ͨ��Բ�� ���������Բ������
    // Circle c1;

    // // ��Բ��������Խ��и�ֵ
    // c1.m_r = 10;

    // // ��ȡԲc1���ܳ�
    // cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

    Student s1;
    s1.name = "����";
    s1.number = "123456";

    s1.setName("����");
    s1.setNumber("222222");
    s1.showStudent();

    system("pause");

    return 0;
}