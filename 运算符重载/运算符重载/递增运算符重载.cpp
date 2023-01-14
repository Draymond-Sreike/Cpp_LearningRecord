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
//		cout << "无参构造调用" << endl;
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
//		cout << "有参构造调用" << endl;
//
//		this->value = for_value;
//	}
//	
//	MyInteger operator++()
//	{
//		cout << "++运算符操作函数调用" << endl;
//
//		value++;	// 写成value = value + 1、value += 1、++value都没有问题，保证这行代码执行结束后value增加1即可
//		return *this;
//	}
//
//private:
//	int value;
//};
//
//ostream& operator<<(ostream &cout, const MyInteger &myInt)
//{
//	cout << "<<运算符操作函数调用" << endl;
//	cout << myInt.value;
//	return cout;
//}
//
////void fun1(int& a)
////{
////	cout << "形参类型为 int& 的函数调用" << endl;
////}
////
////void fun1(int a)
////{
////	cout << "形参类型为 int 的函数调用" << endl;
////}
////
////void fun2(MyInteger a) 
////{
////	cout << "形参类型为 MyInteger 的函数调用" << endl;
////}
////void fun2(MyInteger& a) 
////{
////	cout << "形参类型为 MyInteger& 的函数调用" << endl;
////}
//
//// 测试函数
//void test01()
//{
//	//MyInteger myInt1 = 0;
//	//MyInteger& myInt2 = myInt1;
//	//fun2(myInt1);
//	//fun2(myInt2);
//
//	int a = 0;
//	int& b = a;
//
//	// 验证函数重载
//	//fun1(&a);
//	//fun1((int&)b);
//
//}
//
//// 测试函数
//void test02()
//{
//	MyInteger myInt1 = 0;
//	cout << myInt1 << endl;
//	cout << ++myInt1 << endl;	// 1
//	////MyInteger &temp = myInt1.operator++();
//	//operator<<(cout, myInt1.operator++()) << endl;	// 1
//
//	MyInteger myInt2 = 0;
//	//cout << myInt2++ << endl;	// 0
//	//cout << myInt2 << endl;		// 1
//}
//
//int fun2(int &fun2_a)
//{
//	//cout << &fun2_a << endl;	
//
//	fun2_a++;
//	return fun2_a;
//}
//
//ostream& fun1(ostream& cout, int &fun1_a)
//{
//	//cout << &fun1_a << endl;
//
//	cout << fun1_a;
//	return cout;
//}
//
////void test03()
////{
////	int a = 0;
////	//fun1(cout, fun2(a)) << endl;
////	int& b = 10;
////	cout << &a << endl;
////	//cout << &b << endl;
////	//int& b = fun2(a);
////}
//
//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	system("pause");
//	return 0;
//}