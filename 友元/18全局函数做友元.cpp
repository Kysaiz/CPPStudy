#include <iostream>
using namespace std;

// ��������
class Building
{
    // friend�ؼ���Ϊ�������һ����Ԫ��ӵ��˽��Ȩ��
    friend void goodGay(Building *building);

public:
    string m_SittingRoom; // ����

    Building()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }

private:
    string m_BedRoom; // ����
};

// ȫ�ֺ���
void goodGay(Building *building)
{
    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test1()
{
    Building b;
    goodGay(&b);
}

int main()
{
    test1();

    system("pause");
    return 0;
}