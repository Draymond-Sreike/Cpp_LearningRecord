#include<iostream>
#include<string>

using namespace std;

class Building;	

class GoodGay
{
public:
	GoodGay();

	void visit01();	// Ŀ�ģ�ʹ�øó�Ա�����ܹ�����Building�е�˽������
	void visit02();	// Ŀ�ģ��ó�Ա�����޷�����Building�е�˽������ 

public:
	Building* building;
};

class Building
{
	friend void GoodGay::visit01();
public:
	Building();

public:
	string sittingRoom;

private:
	string bedRoom;

};
Building::Building()	// ����ʵ�����ں���
{
	sittingRoom = "����";
	bedRoom = "����";
}

/**********************************GoodGay���в����ϲ���ȫ����Ҫ��Ĳ���************************************/
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit01()
{
	cout << "GoodGay���Ա����visit01���ڷ���Building�����building�ģ�" << building->sittingRoom << endl;

	cout << "GoodGay���Ա����visit01���ڷ���Building�����building�ģ�" << building->bedRoom << endl;
}
void GoodGay::visit02()
{
	cout << "GoodGay���Ա����visit02���ڷ���Building�����building�ģ�" << building->sittingRoom << endl;

	// �����޷�����Building�����building��˽������bedRoom
	//cout << "GoodGay���Ա����visit02���ڷ���Building�����building�ģ�" << building->bedRoom << endl;
}
/******************************************************************************************************/


int main()
{
	GoodGay gg;
	gg.visit01();
	gg.visit02();

	system("pause");
}