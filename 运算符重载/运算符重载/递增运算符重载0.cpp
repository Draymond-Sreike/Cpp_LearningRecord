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
//	/// <summary>
//	///  MyInteger��Ŀ������졣��ʵ��Ĭ�Ͽ������칦�ܵĻ����ϣ�ͨ��cout�����صĺ���������ʾ��Ϣ
//	/// </summary>
//	/// <param name="myInt">
//	/// ��MyInteger���͵ı��������󣩶����ͬʱ���ڲο������ı���������
//	/// </param>
//	MyInteger(const MyInteger& myInt)
//	{
//		cout << "�����������" << endl;
//		this->value = myInt.value;
//	}
//
//	MyInteger& operator++()
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
//ostream& operator<<(ostream& cout, const MyInteger& myInt)
//{
//	cout << "<<�����������������" << endl;
//	cout << myInt.value;
//	return cout;
//}
//
//void test01()
//{
//	int a = 0;
//	cout << ++(++a) << endl;
//	cout << a << endl;
//}
//
//// ���Ժ���
//void test02()
//{
//	MyInteger myInt1 = 0;
//	cout << ++myInt1 << endl;	// 1
//	cout << myInt1 << endl;		// 1
//
//
//	MyInteger myInt2 = 0;
//	//cout << myInt2++ << endl;	
//	//cout << myInt2 << endl;		
//}
//
//void test03()
//{
//	MyInteger myInt = 0;
//	cout << ++(++myInt) << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}