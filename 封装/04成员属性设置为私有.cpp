#include <iostream>
using namespace std;

// ��Ա��������Ϊ˽��
// 1�������Լ����ƶ�дȨ��
// 2������д���Լ��������Ч��

// ���һ���ࡰ�ˡ�
class Person
{
public:
    // д����
    void setName(string t_name)
    {
        m_Name = t_name;
    }

    // ������
    string getName()
    {
        return m_Name;
    }

    // ������
    int getAge()
    {
        return m_Age;
    }

    // д���䣬���䷶Χ������0~150֮��
    void setAge(int t_Age)
    {
        if (t_Age < 0 || t_Age > 150)
        {
            cout << "���䷶Χ������0~150֮�䣡��" << endl;
            t_Age = 0;
        }

        m_Age = t_Age;
    }

    // д����
    void setLover(string t_Lover)
    {
        m_Lover = t_Lover;
    }

private:
    // ���� �ɶ���д
    string m_Name;
    // ���� ֻ��
    int m_Age;
    // ���� ֻд
    string m_Lover;
};

int main()
{
    Person p;

    p.setName("����");
    p.setLover("�Ծ�");
    p.setAge(1002);

    cout << "p������Ϊ��" << p.getName() << endl;
    cout << "p������Ϊ��" << p.getAge() << endl;

    system("pause");

    return 0;
}