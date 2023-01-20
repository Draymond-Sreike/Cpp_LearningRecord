//#include <iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, const MyInteger& myInt);
//
//public:
//	/// <summary>
//	/// MyInteger类的无参构造：为了确保程序中定义MyInteger类型的变量（对象）且无赋初值的情况下，
//	/// （默认）使得其属性value值为0
//	/// </summary>
//	MyInteger()
//	{
//		value = 0;
//	}
//
//	/// <summary>
//	/// MyInteger类的有参构造：在程序中定义MyInteger类型的变量（对象）且同时赋初值的情况下，
//	/// 使用该初值for_value作为其属性value的值
//	/// </summary>
//	/// <param name="for_value">
//	/// ：MyInteger类型的变量（对象）定义的同时要赋值给value的初值
//	/// </param>
//	MyInteger(int for_value)
//	{
//		this->value = for_value;
//	}
//
//	MyInteger& operator++()
//	{
//		value++;	// 写成value = value + 1、value += 1、++value都没有问题，保证这行代码执行结束后value增加1即可
//		return *this;
//	}
//
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		value++;
//		return temp;
//	}
//
//private:
//	int value;
//};
//
//ostream& operator<<(ostream& cout, const MyInteger& myInt)
//{
//	cout << myInt.value;
//	return cout;
//}
//
////void test01()
////{
////	int a = 0;
////	cout << (a++)++ << endl;
////
////	MyInteger myInt = 0;
////	cout << (myInt++)++ << endl;
////	cout << myInt << endl;
////}
//
//// 测试函数
//void test02()
//{
//	MyInteger myInt1 = 0;
//	cout << ++myInt1 << endl;	// 1
//	cout << myInt1 << endl;		// 1
//
//	MyInteger myInt2 = 0;
//	cout << myInt2++ << endl;	// 0
//	cout << myInt2 << endl;	// 1
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}