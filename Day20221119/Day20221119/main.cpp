//#include<iostream>
//using namespace std;
//#include<string.h>
//
////��������
//class Building
//{
//    // ���߱����� goodGay(Building* building)ȫ�ֺ�����Building��ĺ����ѣ����Է������е�˽������
//    friend void goodGay(Building* building);    
//    
//public:
//    Building()	// �޲ι���
//    {
//        m_SittingRoom = "����";
//        m_BedRoom = "����";
//    }
//
//public:
//    string m_SittingRoom;
//
//private:
//    string m_BedRoom;
//};
//
//void goodGay(Building* building) // ȫ�ֺ���
//{
//    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
//
//    cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;	// ��ʱ���ٱ������Է���˽������m_BedRoom����Ϊ�����������Ԫ
//}
//
//void test01()
//{
//    Building building;	// �����޲ι���
//    goodGay(&building);
//}
//
//int main()
//{
//    test01();
//    system("pause");
//}