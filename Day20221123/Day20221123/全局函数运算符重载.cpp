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
    /*****************************************开始时我们想要实现的运算*****************************************/
    // 想创建第三个人，让第三个人的m_A和m_B属性等于p1和p2的m_A和m_B的和
    Person p3 = p1 + p2;	// 编译器此时就不会报错了 
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