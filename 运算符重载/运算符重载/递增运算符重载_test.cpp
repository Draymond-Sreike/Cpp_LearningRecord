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
//		this->value = for_value;
//	}
//
//	MyInteger& operator++()
//	{
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
//	cout << myInt.value;
//	return cout;
//}
//
//// ���Ժ���
//void test02()
//{
//	MyInteger myInt1 = 0;
//	cout << ++myInt1 << endl;	// 1
//	cout << myInt1 << endl;		// 1
//
//	MyInteger myInt2 = 0;
//	//cout << myInt2++ << endl;	// 0
//	//cout << myInt2 << endl;	// 1
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//	return 0;
//}