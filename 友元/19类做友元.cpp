#include <iostream>
#include <string>
using namespace std;

// 类做友元

// 建筑物类
class Building
{
    friend class GoodGay;

public:
    Building();

public:
    string m_SittingRoom; // 客厅

private:
    string m_BedRoom; // 卧室
};

// 好基友类
class GoodGay
{
public:
    void visit(); // 参观函数 访问Building中的属性
    GoodGay();

    Building *building;
};

void GoodGay::visit()
{
    cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
    cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

// 类外写成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

// 类外写成员函数
GoodGay::GoodGay()
{
    // 创建建筑物对象
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