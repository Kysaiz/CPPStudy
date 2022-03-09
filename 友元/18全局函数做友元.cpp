#include <iostream>
using namespace std;

// 建筑物类
class Building
{
    // friend关键字为该类添加一个友元，拥有私密权限
    friend void goodGay(Building *building);

public:
    string m_SittingRoom; // 客厅

    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

private:
    string m_BedRoom; // 卧室
};

// 全局函数
void goodGay(Building *building)
{
    cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;

    cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;
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