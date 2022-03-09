#include <iostream>
using namespace std;

// 访问权限
// 公共权限 public      成员    类内可以访问    类外可以访问
// 保护权限 protected   成员    类内可以访问    类外不可以访问  子可以访问父的保护内容
// 私有权限 private     成员    类内可以访问    类外不可以访问  子不可以访问父的保护内容

// class和struct唯一的区别是默认的访问权限不同
// class默认访问权限为private
// struct默认访问权限为public

class C1
{
    int a;
};

struct C2
{
    int a;
};

int main()
{
    C1 a;
    C2 b;
    a.a = 1;
    b.a = 1;

    system("pause");

    return 0;
}