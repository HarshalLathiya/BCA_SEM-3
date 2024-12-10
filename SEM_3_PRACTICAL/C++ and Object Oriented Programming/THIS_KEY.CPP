#include<iostream.h>
#include<conio.h>
//write a C++ program for "This" keyword
class bca
{
	public:
	int num;
	void fun(int num)
	{
		this->num=num;
		cout<<"Value of Num is :"<<num;
	}
};
void main()
{
	clrscr();
	bca obj;
	obj.fun(7);
	getch();
}