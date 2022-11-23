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
//    /*****************************************开始时我们想要实现的运算*****************************************/
//    // 想创建第三个人，让第三个人的m_A和m_B属性等于p1和p2的m_A和m_B的和
//    Person p3 = p1 + p2;	// 编译器此时就不会报错了 
//    /******************************************************************************************************/
//    cout << p3.m_A << p3.m_B << endl;
//
//	//Person p3 = p1.operator+(p2);    // 上面代码的本质调用
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