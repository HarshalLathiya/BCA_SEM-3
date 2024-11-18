#include<iostream.h>
#include<conio.h>
//write a C++ program to use containership method
class first
{
	public:
	int num;
	void show()
	{
		num=10;
		cout<<"Hello first:"<<num;
	}
};
class second
{
	public:
	second()//constructor of second
	{
		first obj;
		obj.show();
	}
};
void main()
{
	clrscr();
	second obj2;
	getch();
}