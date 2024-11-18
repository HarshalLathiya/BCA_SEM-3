#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
//write a C++ program for overloading
void fun(int a)
{
	cout<<endl<<a;
}
void fun(char f[])
{
	cout<<endl<<f;
}
void fun(char c)
{
	cout<<endl<<c;
}
void main()
{
	clrscr();
	cout<<endl<<setw(50)<<"Function Overloading";
	fun(12);
	fun("Harshal");
	fun('B');
	getch();
}