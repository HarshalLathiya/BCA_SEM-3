#include<iostream.h>
#include<conio.h>
//Write a C++ program to use function inside of the class.
class sy
{
	public:
	int num;
	void fun()
	{
	cout<<endl<<"Hello UDF you are inside of the class";
	cout<<endl<<"num value is:"<<num;
	}

};
void main()
{
	clrscr();
	sy obj;
	obj.num=100;
	obj.fun();
	getch();
}