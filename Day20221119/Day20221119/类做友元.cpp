#include<iostream>
using namespace std;
#include<string.h>

class Building // ���������൱�ں���ͷ���������е�ʵ�ֿ��Է��ں���
{
    // ���߱�����GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
    friend class GoodGay;
public:
    Building();	// �޲ι���

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

class GoodGay
{
public:
    GoodGay()  // �޲ι��� 
    {
        // ��������������ڶ�������������(GoodGay())�е�Building* buildingȥָ�����new�����Ķ���
        //building = new Building;    //����һ��Building���͵�ָ�룬��ָ��ָ�����new�����Ŀռ�
        Building building;
    }

    void visit()   // �ιۺ��� ����Building�е�����
    {
        cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

        // ����GoodGay��ΪBuilding�����Ԫ��GoodGay�����gg���ɷ���Building�����building��˽������
        cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;  
    }

    Building* building; // ���building���޲ι����е�building��ͬһ��
};



//����ʵ�����еĳ�Ա����
Building::Building()
{
    m_SittingRoom = "����";
    m_BedRoom = "����";
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    test01();

    system("pause");
}