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
//	/// MyInteger����޲ι��죺Ϊ��ȷ�������ж���MyInteger���͵ı������������޸���ֵ������£�
//	/// ��Ĭ�ϣ�ʹ��������valueֵΪ0
//	/// </summary>
//	MyInteger()	
//	{
//		cout << "�޲ι������" << endl;
//		value = 0;
//	}
//
//	/// <summary>
//	/// MyInteger����вι��죺�ڳ����ж���MyInteger���͵ı�����������ͬʱ����ֵ������£�
//	/// ʹ�øó�ֵfor_value��Ϊ������value��ֵ
//	/// </summary>
//	/// <param name="for_value">
//	/// ��MyInteger���͵ı��������󣩶����ͬʱҪ��ֵ��value�ĳ�ֵ
//	/// </param>
//	MyInteger(int for_value)	
//	{
//		cout << "�вι������" << endl;
//
//		this->value = for_value;
//	}
//	
//	MyInteger operator++()
//	{
//		cout << "++�����������������" << endl;
//
//		value++;	// д��value = value + 1��value += 1��++value��û�����⣬��֤���д���ִ�н�����value����1����
//		return *this;
//	}
//
//private:
//	int value;
//};
//
//ostream& operator<<(ostream &cout, const MyInteger &myInt)
//{
//	cout << "<<�����������������" << endl;
//	cout << myInt.value;
//	return cout;
//}
//
////void fun1(int& a)
////{
////	cout << "�β�����Ϊ int& �ĺ�������" << endl;
////}
////
////void fun1(int a)
////{
////	cout << "�β�����Ϊ int �ĺ�������" << endl;
////}
////
////void fun2(MyInteger a) 
////{
////	cout << "�β�����Ϊ MyInteger �ĺ�������" << endl;
////}
////void fun2(MyInteger& a) 
////{
////	cout << "�β�����Ϊ MyInteger& �ĺ�������" << endl;
////}
//
//// ���Ժ���
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
//	// ��֤��������
//	//fun1(&a);
//	//fun1((int&)b);
//
//}
//
//// ���Ժ���
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