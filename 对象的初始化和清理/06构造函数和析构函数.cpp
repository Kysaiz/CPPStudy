#include <iostream>
using namespace std;

class Person
{
private:
    /* data */
public:
    // ���캯��
    Person(/* args */)
    {
        cout << "���캯����������" << endl;
    }
    // ��������
    ~Person()
    {
        cout << "����������������" << endl;
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