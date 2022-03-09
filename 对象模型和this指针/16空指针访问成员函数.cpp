#include <iostream>
using namespace std;

// 空指针调用成员函数

class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        //报错原因是因为传入的指针为空 m_Age = this->m_Age
        if (this == NULL)
        {
            return;
        }

        cout << "age = " << this->m_Age << endl;
    }
    int m_Age;
};

void test1()
{
    Person *p1 = NULL;

    p1->showClassName();
    p1->showPersonAge();
}

int main()
{
    test1();

    system("pause");
    return 0;
}