#include <iostream>
using namespace std;

// ��ָ����ó�Ա����

class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        //����ԭ������Ϊ�����ָ��Ϊ�� m_Age = this->m_Age
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