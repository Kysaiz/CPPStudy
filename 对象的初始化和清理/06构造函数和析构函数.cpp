#include <iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    // 构造函数
    Person(/* args */)
    {
        cout << "构造函数被调用了" << endl;
    }
    // 析构函数
    ~Person()
    {
        cout << "析构函数被调用了" << endl;
    }
};

void test1()
{
    Person p;
}

int main()
{
    test1();

    system("pause");
    return 0;
}