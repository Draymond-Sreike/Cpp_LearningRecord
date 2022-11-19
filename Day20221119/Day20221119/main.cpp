//#include<iostream>
//using namespace std;
//#include<string.h>
//
////建筑物类
//class Building
//{
//    // 告诉编译器 goodGay(Building* building)全局函数是Building类的好朋友，可以访问类中的私有内容
//    friend void goodGay(Building* building);    
//    
//public:
//    Building()	// 无参构造
//    {
//        m_SittingRoom = "客厅";
//        m_BedRoom = "卧室";
//    }
//
//public:
//    string m_SittingRoom;
//
//private:
//    string m_BedRoom;
//};
//
//void goodGay(Building* building) // 全局函数
//{
//    cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;
//
//    cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;	// 此时不再报错，可以访问私有属性m_BedRoom，因为这个函数是友元
//}
//
//void test01()
//{
//    Building building;	// 调用无参构造
//    goodGay(&building);
//}
//
//int main()
//{
//    test01();
//    system("pause");
//}