#include<iostream>
#include<stdlib.h>

using namespace std;

class Person
{
public:
    int m_A;
    int m_B;
};

Person operator+(Person &p1, Person &p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}

Person operator+(int num, Person& p1)
{
    Person tmp;
    tmp.m_A = p1.m_A + num;
    tmp.m_B = p1.m_B + num;
    return tmp;
}
void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    //Person p3 = operator+(p1, p2);
    /*****************************************��ʼʱ������Ҫʵ�ֵ�����*****************************************/
    // �봴���������ˣ��õ������˵�m_A��m_B���Ե���p1��p2��m_A��m_B�ĺ�
    Person p3 = p1 + p2;	// ��������ʱ�Ͳ��ᱨ���� 
    /******************************************************************************************************/
    cout << p3.m_A << p3.m_B << endl;
}

void test02()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;

    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    Person p4 = 20 + p1;
    cout << p4.m_A << p4.m_B << endl;
}

int main()
{
    //test01();
    test02();

	system("pause");
	return 0;
}