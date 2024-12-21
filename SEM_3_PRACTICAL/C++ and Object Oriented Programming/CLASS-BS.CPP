#include<iostream.h>
#include<conio.h>
//write a C++ program for class to basic type conversation.
class bca
{
	int num;
	public:
	bca(int pv)
	{
		this->num=pv;
	}
	operator int()
	{
		return num;
	}
};
void main()
{
	clrscr();
	bca obj=10;
	int n_dm=obj;
	cout<<"class to basic:"<<n_dm;
	getch();
}