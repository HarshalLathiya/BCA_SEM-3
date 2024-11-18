#include<iostream.h>
#include<conio.h>
//write a C++ program to use abstract class and pure virtual function
class parent
{
	public:
	virtual void show()=0;
};
class child : public parent
{
	public:
	void show()
	{
		cout<<"Hello abstract class";
	}
};
void main()
{
	clrscr();
	//parent *obj1;
	child obj2;
	obj2.show();
	//obj1=&obj2;
	//obj1->show();
	getch();
}