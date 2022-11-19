#include<iostream>
using namespace std;
#include<string.h>

class Building // 类声明，相当于函数头声明，类中的实现可以放在后面
{
    // 告诉编译器GoodGay类是本类的好朋友，可以访问本类中的私有成员
    friend class GoodGay;
public:
    Building();	// 无参构造

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

class GoodGay
{
public:
    GoodGay()  // 无参构造 
    {
        // 创建建筑物对象（在堆区），让下面(GoodGay())中的Building* building去指向这个new出来的对象
        //building = new Building;    //返回一个Building类型的指针，该指针指向堆区new出来的空间
        Building building;
    }

    void visit()   // 参观函数 访问Building中的属性
    {
        cout << "好基友正在访问：" << building->m_SittingRoom << endl;

        // 声明GoodGay类为Building类的友元后，GoodGay类对象gg即可访问Building类对象building的私有属性
        cout << "好基友正在访问：" << building->m_BedRoom << endl;  
    }

    Building* building; // 这个building与无参构造中的building是同一个
};



//类外实现类中的成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
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