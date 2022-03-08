#include <iostream>
using namespace std;

// 圆周率
const double PI = 3.14;

// 设计一个圆类，求圆的周长
// 圆周长公式 C=2πr
class Circle
{
    // 访问权限
    // 公共权限
public:
    // 属性（成员属性、成员变量）
    // 半径
    int m_r;

    // 行为（成员函数、成员方法）
    // 获取圆的周长
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
        cout << "姓名：" << name << endl;
        cout << "学号：" << number << endl;
    }

    // 给姓名赋值
    void setName(string t_name)
    {
        name = t_name;
    }

    // 给学号赋值
    void setNumber(string t_number)
    {
        number = t_number;
    }
};

int main()
{
    // // 通过圆类 创建具体的圆（对象）
    // Circle c1;

    // // 给圆对象的属性进行赋值
    // c1.m_r = 10;

    // // 获取圆c1的周长
    // cout << "圆的周长为：" << c1.calculateZC() << endl;

    Student s1;
    s1.name = "张三";
    s1.number = "123456";

    s1.setName("李四");
    s1.setNumber("222222");
    s1.showStudent();

    system("pause");

    return 0;
}