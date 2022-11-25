#include<iostream>
using namespace std;
#include<string.h>
// 定义类
class Person 
{
	friend ostream& operator<<(ostream& out, Person& p);	// 结合友元技术让重载函数可以访问私有属性

private:
	int m_A;
	int m_B;
	
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
};

// 实现左移运算符重载的全局函数
ostream& operator<<(ostream &cout, Person &p)
{
	cout << "m_A =" << p.m_A << " m_B = " << p.m_B;
	return cout;
}

// 测试
void test()
{
	int a = 10;
	cout << a << endl;

	Person p(10, 20);
	cout << p << "Hello World!" << endl;	// 加上"<< end"
}

int main()
{
	test();

	system("pause");
	return 0;
}