#include<iostream>
using namespace std;
#include<string.h>
// ������
class Person 
{
	friend ostream& operator<<(ostream& out, Person& p);	// �����Ԫ���������غ������Է���˽������

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

// ʵ��������������ص�ȫ�ֺ���
ostream& operator<<(ostream &cout, Person &p)
{
	cout << "m_A =" << p.m_A << " m_B = " << p.m_B;
	return cout;
}

// ����
void test()
{
	int a = 10;
	cout << a << endl;

	Person p(10, 20);
	cout << p << "Hello World!" << endl;	// ����"<< end"
}

int main()
{
	test();

	system("pause");
	return 0;
}