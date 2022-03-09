#include <iostream>
using namespace std;

// 成员属性设置为私有
// 1、可以自己控制读写权限
// 2、对于写可以检测数据有效性

// 设计一个类“人”
class Person
{
public:
    // 写姓名
    void setName(string t_name)
    {
        m_Name = t_name;
    }

    // 读姓名
    string getName()
    {
        return m_Name;
    }

    // 读年龄
    int getAge()
    {
        return m_Age;
    }

    // 写年龄，年龄范围必须是0~150之间
    void setAge(int t_Age)
    {
        if (t_Age < 0 || t_Age > 150)
        {
            cout << "年龄范围必须是0~150之间！！" << endl;
            t_Age = 0;
        }

        m_Age = t_Age;
    }

    // 写情人
    void setLover(string t_Lover)
    {
        m_Lover = t_Lover;
    }

private:
    // 姓名 可读可写
    string m_Name;
    // 年龄 只读
    int m_Age;
    // 情人 只写
    string m_Lover;
};

int main()
{
    Person p;

    p.setName("张三");
    p.setLover("苍井");
    p.setAge(1002);

    cout << "p的姓名为：" << p.getName() << endl;
    cout << "p的年龄为：" << p.getAge() << endl;

    system("pause");

    return 0;
}