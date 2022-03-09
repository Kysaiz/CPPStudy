#include <iostream>
using namespace std;

// 立方体类
// 求立方体的面积和体积
// 用全局函数和成员函数判断两个立方体是否相等

class Cube
{
private:
    int m_H, m_L, m_W;

public:
    // 设置立方体的长宽高
    void setCube(int H, int L, int W)
    {
        m_H = H;
        m_L = L;
        m_W = W;
    }

    // 返回立方体的面积
    int Scaculate()
    {
        return m_H * m_L * 2 + m_H * m_W * 2 + m_L * m_W * 2;
    }

    // 返回立方体的体积
    int Vcaculate()
    {
        return m_H * m_L * m_W;
    }

    // 比较两个立方体是否相同
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

    cout << "c1的面积S=" << c1.Scaculate() << endl;
    cout << "c1的体积V=" << c1.Vcaculate() << endl;
    cout << "c2的面积S=" << c2.Scaculate() << endl;
    cout << "c2的体积V=" << c2.Vcaculate() << endl;

    int ret = c1.Compare(c2);
    if (ret)
    {
        cout << "两个立方体相同" << endl;
    }
    else
    {
        cout << "两个立方体不相同" << endl;
    }

    system("pause");

    return 0;
}