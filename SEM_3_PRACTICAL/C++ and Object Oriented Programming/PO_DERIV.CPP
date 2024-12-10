#include<iostream.h>
#include<conio.h>
//write a C++ program to use pointer to derived class and virtual member function
class base
{
	public:
       //virtual
       void fun()
	{
		cout<<"Hello Base class\n";
	}
};
class derived : public base
{
	public:
	void fun()
	{
		cout<<"Hello Derived class\n";
	}
};
void main()
{
	clrscr();
	base *pobj;
	derived dobj;
	pobj=&dobj;
	pobj->fun();
	getch();
}