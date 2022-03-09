#include <iostream>
using namespace std;

// 访问权限
// 公共权限 public      成员    类内可以访问    类外可以访问
// 保护权限 protected   成员    类内可以访问    类外不可以访问  子可以访问父的保护内容
// 私有权限 private     成员    类内可以访问    类外不可以访问  子不可以访问父的保护内容

class Person
{
public:
    // 公共权限
    string m_Name; // 姓名

protected:
    // 保护权限
    string m_Car; // 汽车

private:
    // 私有权限
    int m_Password; // 银行卡密码

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    Person p1;
    p1.m_Name = "李四";
    p1.m_Car = "拖拉机";
    p1.m_Password = 123;

    system("pause");

    return 0;
}