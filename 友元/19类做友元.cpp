#include <iostream>
#include <string>
using namespace std;

// ������Ԫ

// ��������
class Building
{
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom; // ����

private:
    string m_BedRoom; // ����
};

// �û�����
class GoodGay
{
public:
    void visit(); // �ιۺ��� ����Building�е�����
    GoodGay();

    Building *building;
};

void GoodGay::visit()
{
    cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
    cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}

// ����д��Ա����
Building::Building()
{
    m_SittingRoom = "����";
    m_BedRoom = "����";
}

// ����д��Ա����
GoodGay::GoodGay()
{
    // �������������
    building = new Building;
}

void test1()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test1();

    system("pause");
    return 0;
}