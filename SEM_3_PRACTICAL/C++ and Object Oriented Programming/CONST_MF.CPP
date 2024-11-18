#include<iostream.h>
#include<conio.h>
//write a C++ program to use const member function
class demo
{
	int a;
	public:
		void data(int x)
		{
			a=x;
		}
		void fun() const;
};
void demo::fun()const
{
	int y=230;
	cout<<"Data member A:"<<a;
	cout<<"\nData member Y:"<<y;
}
void main()
{
	clrscr();
	demo obj;
	obj.data(10);
	obj.fun();
	getch();
}