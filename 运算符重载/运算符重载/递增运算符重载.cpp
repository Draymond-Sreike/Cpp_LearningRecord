#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class MyInteger
{
public:
	/// <summary>
	/// MyInteger����޲ι��죺Ϊ��ȷ�������ж���MyInteger���͵ı������������޸���ֵ������£�
	/// ��Ĭ�ϣ�ʹ��������valueֵΪ0
	/// </summary>
	MyInteger()	
	{
		value = 0;
	}

	/// <summary>
	/// MyInteger����вι��죺�ڳ����ж���MyInteger���͵ı�����������ͬʱ����ֵ������£�
	/// ʹ�øó�ֵfor_value��Ϊ������value��ֵ
	/// </summary>
	/// <param name="for_value">
	/// ��MyInteger���͵ı��������󣩶����ͬʱҪ��ֵ��value�ĳ�ֵ
	/// </param>
	MyInteger(int for_value)	
	{
		this->value = for_value;
	}

private:
	int value;
};

void func(int)
{}

void test01()
{
	//func("src");
	int a = 0;
	//cout << (a++)++ << endl;
	cout << ++a << endl;
	cout << a << endl;
	
	int b = 0;
	cout << b++ << endl;
	cout << b << endl;
}

void test02()
{
	MyInteger myInt1 = 0;
	//cout << ++myInt1 << endl;	// 1
	//cout << myInt1 << endl;		// 1

	MyInteger myInt2 = 0;
	//cout << myInt2++ << endl;	// 0
	//cout << myInt2 << endl;		// 1
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}