#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Person
{
public:
	Person()								// 复刻默认无参构造
	{
		cout << "无参构造调用" << endl;
		m_Age = 0;
	}

	Person(int for_Age)
	{
		cout << "有参构造调用" << endl;
		m_Age =new int(for_Age);
	}

	Person(const Person& p)		// 复刻默认拷构
	{
		cout << "拷贝构造调用" << endl;
		m_Age = p.m_Age;
	}

	void operator=(const Person& p)	// 复刻
	{
		cout << "等号运算符操作函数调用" << endl;
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
	p3 = 10;	// <=> p3 = Person(10)，如果这算是隐式转换的话，那么赋值运算符操作函数即使存在也是无法避开隐式转换的
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