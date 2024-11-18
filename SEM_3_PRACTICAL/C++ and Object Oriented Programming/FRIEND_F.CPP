#include<iostream.h>
#include<conio.h>
//write a C++ program for use Friend function.
class syb
{
	int a;
	public:
	int x;
	void fun(int y)
	{
		a=y;
		cout<<"Fun()\nValue of a is:"<<a<<"\nValue of x is:"<<x;
	}
	friend void show(syb);
};
	void show(syb obj)
	{
		obj.x=700;
		cout<<"\nShow()\nValue of a is:"<<obj.a;
		cout<<endl<<"Value of x is:"<<obj.x;
	}
	void main()
	{
		clrscr();
		syb b;
		b.x=10;
		b.fun(900);
		show(b);
		getch();
	}
