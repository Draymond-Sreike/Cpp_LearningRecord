#include<iostream>
#include<string>

using namespace std;

class Building;	

class GoodGay
{
public:
	GoodGay();

	void visit01();	// 目的：使得该成员函数能够访问Building中的私有内容
	void visit02();	// 目的：该成员函数无法访问Building中的私有内容 

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
Building::Building()	// 类外实现类内函数
{
	sittingRoom = "客厅";
	bedRoom = "卧室";
}

/**********************************GoodGay类中不符合不完全类型要求的操作************************************/
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit01()
{
	cout << "GoodGay类成员函数visit01正在访问Building类对象building的：" << building->sittingRoom << endl;

	cout << "GoodGay类成员函数visit01正在访问Building类对象building的：" << building->bedRoom << endl;
}
void GoodGay::visit02()
{
	cout << "GoodGay类成员函数visit02正在访问Building类对象building的：" << building->sittingRoom << endl;

	// 报错，无法访问Building类对象building的私有属性bedRoom
	//cout << "GoodGay类成员函数visit02正在访问Building类对象building的：" << building->bedRoom << endl;
}
/******************************************************************************************************/


int main()
{
	GoodGay gg;
	gg.visit01();
	gg.visit02();

	system("pause");
}