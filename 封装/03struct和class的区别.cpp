#include <iostream>
using namespace std;

// ����Ȩ��
// ����Ȩ�� public      ��Ա    ���ڿ��Է���    ������Է���
// ����Ȩ�� protected   ��Ա    ���ڿ��Է���    ���ⲻ���Է���  �ӿ��Է��ʸ��ı�������
// ˽��Ȩ�� private     ��Ա    ���ڿ��Է���    ���ⲻ���Է���  �Ӳ����Է��ʸ��ı�������

// class��structΨһ��������Ĭ�ϵķ���Ȩ�޲�ͬ
// classĬ�Ϸ���Ȩ��Ϊprivate
// structĬ�Ϸ���Ȩ��Ϊpublic

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