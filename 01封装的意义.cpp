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
    // ����
    // �뾶
    int m_r;

    // ��Ϊ
    // ��ȡԲ���ܳ�
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    // ͨ��Բ�� ���������Բ������
    Circle c1;

    // ��Բ��������Խ��и�ֵ
    c1.m_r = 10;

    // ��ȡԲc1���ܳ�
    cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

    system("pause");

    return 0;
}