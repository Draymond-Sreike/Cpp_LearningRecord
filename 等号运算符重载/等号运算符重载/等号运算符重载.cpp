#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Person
{
public:
	Person()								// ����Ĭ���޲ι���
	{
		cout << "�޲ι������" << endl;
		m_Age = 0;
	}

	Person(int for_Age)
	{
		cout << "�вι������" << endl;
		m_Age =new int(for_Age);
	}

	Person(const Person& p)		// ����Ĭ�Ͽ���
	{
		cout << "�����������" << endl;
		m_Age = p.m_Age;
	}

	void operator=(const Person& p)	// ����
	{
		cout << "�Ⱥ������������������" << endl;
		m_Age = p.m_Age;
	}

	int* m_Age;
};

void test()
{
	Person p1(18);
	Person p2(20);
	
	cout << *p1.m_Age << endl;
	cout << *p2.m_Age << endl;

	Person p3;
	cout << &p3 << endl;
	p3 = 10;	// <=> p3 = Person(10)�������������ʽת���Ļ�����ô��ֵ���������������ʹ����Ҳ���޷��ܿ���ʽת����
	cout << &p3 << endl;
	Person p5 = 10;

	Person p4 = p3;
	
}

int main()
{
	test();

	system("pause");
	return 0;
}