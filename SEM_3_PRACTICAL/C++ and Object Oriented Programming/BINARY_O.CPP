#include<iostream.h>
#include<conio.h>
//binary operator overloading.
class syb
{
	public:
	int x;
	void fun()
	{
		cout<<endl<<"Hello member function"<<x;
	}
	friend syb operator -(syb,syb,syb);
};
	syb operator -(syb o1,syb o2,syb o3)
	{
		syb o3;
		cout<<endl<<"Outside of the class";
		cout<<endl<<"value of o1:"<<o1.x;
		cout<<endl<<"value of o2:"<<o2.x;
		o3.x=o1.x-o2.x-o3.x;
		cout<<endl<<"substraction of both value:"<<o3.x;
		return o3;
	}
void main()
{
	clrscr();
	syb obj,obj1,obj3;
	obj.x=10;
	obj1.x=5;
	obj3.x=5;
	obj3=obj-obj1-obj3;
	obj3.fun();
	getch();
}