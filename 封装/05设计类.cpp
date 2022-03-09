#include <iostream>
using namespace std;

// ��������
// �����������������
// ��ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

class Cube
{
private:
    int m_H, m_L, m_W;

public:
    // ����������ĳ����
    void setCube(int H, int L, int W)
    {
        m_H = H;
        m_L = L;
        m_W = W;
    }

    // ��������������
    int Scaculate()
    {
        return m_H * m_L * 2 + m_H * m_W * 2 + m_L * m_W * 2;
    }

    // ��������������
    int Vcaculate()
    {
        return m_H * m_L * m_W;
    }

    // �Ƚ������������Ƿ���ͬ
    int Compare(Cube &c)
    {
        if (Scaculate() == c.Scaculate() && Vcaculate() == c.Vcaculate())
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    Cube c1, c2;
    c1.setCube(1, 2, 3);
    c2.setCube(3, 2, 1);

    cout << "c1�����S=" << c1.Scaculate() << endl;
    cout << "c1�����V=" << c1.Vcaculate() << endl;
    cout << "c2�����S=" << c2.Scaculate() << endl;
    cout << "c2�����V=" << c2.Vcaculate() << endl;

    int ret = c1.Compare(c2);
    if (ret)
    {
        cout << "������������ͬ" << endl;
    }
    else
    {
        cout << "���������岻��ͬ" << endl;
    }

    system("pause");

    return 0;
}