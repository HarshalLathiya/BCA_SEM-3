#include<iostream.h>
#include<conio.h>
//Write a c++ program to use static member function
class demo
{
	public:
	static int a;
	int b;
	void fun()
	{
		cout<<"\nFun()";
		cout<<"\nValue of static A is:"<<a;
		cout<<"\nValue of normal B is:"<<b;
	}
	static void fun2()
	{
		demo obj2;
		obj2.b=11;
		cout<<"\nFun2()";
		cout<<"\nValue of static A:"<<a;
		cout<<"\nValue of normal B:"<<obj2.b;
	}
};
	int demo::a;
	void main()
	{
		demo obj;
		clrscr();
		obj.b=20;
		cout<<"\nCall Normal Member function";
		obj.fun();
		cout<<"\n\nCall static member function without object";
		obj.fun2();
		getch();
	}
