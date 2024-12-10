#include<iostream.h>
#include<conio.h>
//write a C++ program to use virtual base class.
class parent
{
	public:
	int num1;
};
class child:virtual public parent
{
	public:
	int num2;
};
class subchild:virtual public parent
{
	public:
	int num3;
};
class superchild:public child,public subchild
{
	public:
	void show()
	{
		cout<<"Value of Num1 is :"<<num1<<endl;
		cout<<"Value of Num2 is :"<<num2<<endl;
		cout<<"Value of Num3 is :"<<num3<<endl;
	}
};
void main()
{
	clrscr();
	superchild obj;
	obj.num1=10;
	obj.num2=20;
	obj.num3=30;
	obj.show();
	getch();
}
