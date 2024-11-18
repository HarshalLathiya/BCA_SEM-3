#include<iostream.h>
#include<conio.h>
//write a C++ program to basic to class conversation
class bca
{
	int num;
	public:
	bca(int pv)
	{
		this->num=pv;
	}
	void show()
	{
		cout<<"Basic to class type:"<<num;
	}
};
	void main()
	{
	clrscr();
	bca obj=11;
	obj.show();
	getch();
	}