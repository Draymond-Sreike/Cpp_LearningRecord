//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//class Person
//{
//public:
//    int m_A;
//    int m_B;
//
//    Person operator+(Person& p)
//    {
//        Person tmp;
//        tmp.m_A = this->m_A + p.m_A;
//        tmp.m_B = this->m_B + p.m_B;
//        return tmp;
//    }
//
//    Person operator+(int num)
//    {
//        Person tmp;
//        tmp.m_A = this->m_A + num;
//        tmp.m_B = this->m_B + num;
//        return tmp;
//    }
//};
//
//void test01()
//{
//    Person p1;
//    p1.m_A = 10;
//    p1.m_B = 10;
//
//    Person p2;
//    p2.m_A = 10;
//    p2.m_B = 10;
//
//    /*****************************************��ʼʱ������Ҫʵ�ֵ�����*****************************************/
//    // �봴���������ˣ��õ������˵�m_A��m_B���Ե���p1��p2��m_A��m_B�ĺ�
//    Person p3 = p1 + p2;	// ��������ʱ�Ͳ��ᱨ���� 
//    /******************************************************************************************************/
//    cout << p3.m_A << p3.m_B << endl;
//
//	//Person p3 = p1.operator+(p2);    // �������ı��ʵ���
// //    cout << p3.m_A << p3.m_B << endl;
//}
//
//void test02()
//{
//    Person p1;
//    p1.m_A = 10;
//    p1.m_B = 10;
//
//    Person p2;
//    p2.m_A = 10;
//    p2.m_B = 10;
//
//    Person p4 = p1 + 20;
//    cout << p4.m_A << p4.m_B << endl;
//}
//
//int main()
//{
//    //test01();
//    test02();
//	system("pause");
//	return 0;
//}